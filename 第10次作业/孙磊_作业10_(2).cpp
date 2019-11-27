//(2)
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void getRandom(int a[], int n){
	srand((unsigned int)time(0));//用时间作为随机种子 
	for(int i=0;i<n;i++)
		a[i]=rand()%100; //调用rand()生成0-100随机整数 
}

int getMax(const int a[], int n){
	int max=0,num=0;//定义最大值max和最大值下标num变量 
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
			num=i;
		}
	}
	return num;
}
//测试 
int main(){
	int a[10];
	getRandom(a, 10);
	for(int i=0;i<10;i++)//把a数组输出来 
		cout<<a[i]<<' ';
		cout<<endl; 
	cout<<"The max number is No."<<getMax(a, 10)<<"(from 0)"<<endl;
	return 0;
}
