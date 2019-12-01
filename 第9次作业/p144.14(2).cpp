#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	void getRandom(int a[],int n);
	int getMax(const int a[],int n); 
	int x;
	cin>>x;
	int a[500];
	getRandom(a,x);
	getMax(a,x);
	
}
void getRandom(int a[500],int n){
	int i;
	srand((int)time(0));
	for(i=0;i<n;i++){
		a[i]=rand()%100;
		cout<<a[i]<<" ";
	} 
	cout<<endl;
}
int getMax(const int a[500],int n){
	int i,j,temp,m,b[n],c[n];
	for(i=0;i<=n-1;i++){
		b[i]=i;
		c[i]=a[i];
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(c[j]>c[j+1]){
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
				m=b[j];
				b[j]=b[j+1];
				b[j+1]=m;
			}
		}
	}
	cout<<c[n-1]<<endl<<b[n-1];
	return b[n-1];
} 
