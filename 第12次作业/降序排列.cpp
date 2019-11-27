#include <iostream>
using namespace std;
const int n=8;
int getSettimes(int rs[],const int a[],int t[],int n){
	int i=1,p=1,w,count=0,temp,tem;
	rs[0]=a[0];
	for (;i<n;i++){
		for (int j=0;j<i;j++){
			if (a[j]==a[i]){
			w=i; }
			}
			if (i!=w){
			rs[p]=a[i];  
			p++;}
	}
	for (int k=0;k<p;k++){
		count=0;
		for (int i=0;i<n;i++){
			if (rs[k]==a[i])
			count++;
		}
		t[k]=count;
	}
	
	for (int i=0;i<p-1;i++)
	for (int j=0;j<p-1-i;j++)
	if (t[j]<t[j+1]){
		temp=t[j];
		t[j]=t[j+1];
		t[j+1]=temp;
		tem=rs[j];
		rs[j]=rs[j+1];
		rs[j+1]=tem;
	}
	for (int k=0;k<p;k++)
	cout<<rs[k]<<":"<<t[k]<<endl;
} 
int main (){
	int rs[n],a[n],t[n],i=0;
	for (;i<n;i++)
	cin>>a[i];
	getSettimes(rs,a,t,n);
}

