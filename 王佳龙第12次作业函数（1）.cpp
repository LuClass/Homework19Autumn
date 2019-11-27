#include <iostream>
using namespace std;
int getSet(int rs[],const int a[],int n){
	int count=1,j,m;
	rs[0]=a[0];
	cout<<rs[0]<<" ";
	for(int i=1;i<=n-1;i++){
		j=0;m=0;
		if(rs[0]!=a[i]){
		for(j;j<count;j++){
		if(rs[j]!=a[i])
		m++;
	}
	    if(m==j){
	        rs[j]=a[i];
	        cout<<a[i]<<" ";
	        count++;
	}
}
}cout<<endl<<count<<" ";
}
int main(){
	int rs[100],n;
    cout<<"输入数组a大小"<<endl;
	cin>>n;
	int a[100];
	cout<<"输入数组各元素大小"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i]; 
	getSet(rs,a,n);
}

