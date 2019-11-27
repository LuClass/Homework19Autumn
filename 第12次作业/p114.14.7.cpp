#include<iostream>
using namespace std;
int main(){
	int rs[50];
	int n,i;
	int a[50];
	cout<<"请在第一行输入数组中元素的个数，在第二行输入元素"<<endl;
	cin>>n;
	for(i=0;i<=n-1;i++){
		cin>>a[i];
	}
	int getSet1(int rs[],const int a[],int n);
	void getSet2(int rs[],const int a[],int n);
	void getSet3(int rs[],const int a[],int n);
	getSet3(rs,a,n);
}
int getSet1(int rs[],const int a[],int n){
	int i,count=0,j;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=i-1;j++){
			if(a[i]==a[j]&&i!=j)
				break;
		}
		if(a[i]==a[j]&&i!=j)
			continue;
		rs[count]=a[i];
		count++;
	}
	cout<<count;
	return count;
}
void getSet2(int rs[],const int a[],int n){
	int i,j,count=0,b[n]={},rscount[50];
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(a[i]==a[j])
				b[i]++;
		}
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=i-1;j++){
			if(a[i]==a[j]&&i!=j)
				break;
		}
		if(a[i]==a[j]&&i!=j)
			continue;
		rs[count]=a[i];
		rscount[count]=b[i];
		count++;
	}
}
void getSet3(int rs[],const int a[],int n){
	int i,j,count=0,b[n]={},rscount[50],temp;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(a[i]==a[j])
				b[i]++;
		}
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=i-1;j++){
			if(a[i]==a[j]&&i!=j)
				break;
		}
		if(a[i]==a[j]&&i!=j)
			continue;
		rs[count]=a[i];
		rscount[count]=b[i];
		count++;
	}
	for(i=0;i<count-1;i++){
		for(j=0;j<count-1-i;j++){
			if(rscount[j]>rscount[j+1]){
				temp=rscount[j];
				rscount[j]=rscount[j+1];
				rscount[j+1]=temp;
				temp=rs[j];
				rs[j]=rs[j+1];
				rs[j+1]=temp;
			}
		}
	}
	for(i=count-1;i>=0;i--){
		cout<<rs[i]<<":"<<rscount[i]<<endl;
	}
}
