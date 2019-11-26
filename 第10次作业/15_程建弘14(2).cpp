/*
(2)编写函数： void getRandom(int a[], int n)，
生成 0 到 100 之间的随机整数作为数组元素。
再编写一个函数 int getMax(const int a[], int n)，
在数组 a 中找出最大值并返回下标。
*/ 
#include<iostream>
#include<cstdlib>
using namespace std;
const int n=100;
void getRandom(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=(rand()%(n+1));
	}
}
int getMax(const int a[], int n){
	int pos=0,max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			pos=i;
			max=a[i];
		}
	}
	return pos;
}
int main(){
	int a[n];
	getRandom(a,n);
	int m=getMax(a,n);
	cout<<"最大值为："<<a[m]<<endl;
	cout<<"最大值下标："<<m<<endl;
} 
