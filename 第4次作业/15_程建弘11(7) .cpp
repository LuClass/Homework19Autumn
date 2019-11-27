#include<iostream>
#include<string.h>
using namespace std;
int a[20];
int main(){	
	a[0]=1;a[1]=2;
	for(int i=2;i<=20;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cout<<a[0]<<"/"<<a[1]<<endl;
	for(int i=1;i<20;i++){
		cout<<a[i+1]<<"/"<<a[i]<<endl;
	}
}
