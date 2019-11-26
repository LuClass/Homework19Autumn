#include <iostream>
#include <stdlib.h>
using namespace std;
void makeRandom(int data[],int n){
	srand(data[0]);
	for(int i=0;i<n;i++)
	data[i]=rand()%100;
}
int getMax(const int a[],int n){
	int x,y;
	for(x=0,y=0;y<n;y++){
		if(a[x]<a[y])
		x=y;
	}
	return x;
} 
int main (void){
    int n;
	int m;
	cin>>n;
	int a[n];
	makeRandom(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<'\n';
	m=getMax(a,n);
	for(int j=0;j<n;j++){      //防止最大值有多个 
		if(a[j]==a[m])
		cout<<j;
	}
	return 0;
}
