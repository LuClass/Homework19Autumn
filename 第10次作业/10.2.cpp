#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void getRandom(int a[], int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++)
		a[i]=rand()%100; 
}

int getMax(const int a[], int n){
	int max=0,num=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			num=i;
		}
	}
	return num;
}
int main(){
	int a[10];
	getRandom(a, 10);
	for(int i=0;i<10;i++)
		cout<<a[i]<<' ';
		cout<<endl; 
	cout<<"The max number is No."<<getMax(a, 10)<<"(from 0)"<<endl;
	return 0;
}
