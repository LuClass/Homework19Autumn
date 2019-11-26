#include <iostream>
using namespace std;
int getSet(int rs[],const int a[],int n){
	rs[0]=a[0];
	int i,j,sum;
	int trs=1;
	for( i=1;i<=n-1;i++){
		for(j=0,sum=0;j<trs;j++){
		if(a[i]!=rs[j])sum++;
		}
	if(sum==trs)
	    { trs++;
		rs[trs-1]=a[i];
		}
	}
	return trs;
}
int main(){
    int n;
	cout<<"n=";
	cin>>n;
	int rs[n],a[n];
	cout<<"赋值给数组"; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	x=getSet(rs,a,n);
	cout<<"不同数有："<<x<<endl;
	int b[x],c[x];
	for(int i=0;i<x;i++){
		int j,sum;
		for(j=0,sum=0;j<n;j++){
			if(rs[i]==a[j])sum++;
		}
	b[i]=sum;
	c[i]=sum;
	}
	for(int j=1;j<=x;j++){
	for(int i=0;i<x-1;i++){
		int s;
		if(c[i]<c[i+1]){
		s=c[i];
		c[i]=c[i+1];
		c[i+1]=s;		
		}
	}
	}
	
	for(int i=0;i<x;i++){
		int j;
		for(j=0;j<x;j++){
			if(b[j]==c[i]){
			cout<<rs[j]<<':'<<b[j]<<endl;
			b[j]=0;
			break;	
			}
		}	
	}
	return 0;
}
