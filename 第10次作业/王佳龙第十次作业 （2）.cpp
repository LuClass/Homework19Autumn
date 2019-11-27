#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int getRandom( int data[],int n){
	srand(time(NULL));	
    for(int i = 0; i < n; i++)
	{data[i] = rand() % 101;
	cout<<data[i]<<" ";}
}
int getMax( int data[],int n){
	int i,max=data[0];
		for(i= 0; i<n;i++){
			if(data[i]>max)
			    max=data[i];}
				for(i=0;i<n;i++){
				if(data[i]==max)
				cout<<i;
}}
	int main(){	
    int n,a[100];
	cout<<"输入数组大小"<<endl;
    cin>>n;
    getRandom(a,n);
    cout<<endl;
    getMax(a,n);
}
