#include<iostream>
using namespace std;

bool isEqual(int rs[], int n, int num){	
	for(int i=0;i<n;i++){
		if(rs[i]==num)
		return true;
	}
	return false;
}

int getSet(int rs[], const int a[], int n) {
	rs[0]=a[0]; 
	int count=1;
	for(int i=1;i<n;i++){
		if(!isEqual(rs, count, a[i])){
			rs[count]=a[i];
			count++;
		}
	}
	return count; 
} 

void getSet2(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);	
		for(int i=0;i<count;i++){
			int num=0;
			for(int j=0;j<n;j++){
				if(a[j]==rs[i]) num++;
			}
			cout<<num<<' ';
	}
	cout<<endl;
}

void getSet3(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);	
	int num[count];
	for(int i=0;i<count;i++){
		num[i]=0;
		for(int j=0;j<n;j++){
			if(a[j]==rs[i]) num[i]++;
		}
	}
	for(int i=0;i<count;i++){
		for(int j=i;j<count;j++){
			if(num[i]<num[j]){
				int tmp1=num[i], tmp2=rs[i];
				num[i]=num[j];	rs[i]=rs[j];
				num[j]=tmp1;	rs[j]=tmp2;
			} 
		}
	}
	for(int i=0;i<count;i++){
		cout<<rs[i]<<':'<<num[i]<<endl;
	}
}
 
int main(){
	int a[]={3, 1, 2, 3, 1, 5, 2, 1};
	int rs[8];
	int n=8;
	cout<<getSet(rs,a,n)<<endl;
	getSet2(rs,a,n);
	getSet3(rs,a,n);
} 
