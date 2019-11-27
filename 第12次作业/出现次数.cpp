#include <iostream>
using namespace std;
const int n=8;
int getSettimes(int rs[],const int a[],int t[],int n){
	int i=1,p=1,w,count=0;
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
	cout<<"set array is ";
	for (int k=0;k<p;k++)
	cout<<rs[k]<<" ";
	cout<<endl<<"times array is ";
	for (int l=0;l<p;l++)
	cout<<t[l]<<" ";
} 
int main (){
	int rs[n],a[n],t[n],i=0;
	for (;i<n;i++)
	cin>>a[i];
	getSettimes(rs,a,t,n);
}
