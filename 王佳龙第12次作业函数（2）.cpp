#include <iostream>
using namespace std;
int getSet(int rs[],const int a[],int n,int b[]){
	int count=1,j,m;
	rs[0]=a[0];
	b[0]=1;
	for(int i=1;i<=n-1;i++){
		j=0;m=0;
		if(rs[0]!=a[i]){
		for(j;j<count;j++){
		if(rs[j]!=a[i])
		m++;
		else
		b[j]++;
	}
	    if(m==j){
	        rs[j]=a[i];
	        b[j]=1;
	        count++;
	}
}
else 
b[0]++;
}
for(int q=0;q<count;q++)
cout<<rs[q]<<":"<<b[q]<<endl;
}
int main(){
	int rs[100],n;
    cout<<"输入数组a大小"<<endl;
	cin>>n;
	int a[100],b[100];
	cout<<"输入数组各元素大小"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i]; 
	getSet(rs,a,n,b);
}

