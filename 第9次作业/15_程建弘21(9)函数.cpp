/*
(9)已知三角形的三条边长为 a、b、c，则三角形的面积为：
其中 s=(a+b+c)/2。设计一个函数求三角形的面积。 
*/ 
#include<iostream>
#include<math.h>
using namespace std;
float figure(int a,int b,int c){
	int s=(a+b+c)*0.5;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
	float a,b,c;
	cout<<"请输入三角形的长宽高"<<endl;
	cin>>a>>b>>c;
	cout<<"三角形的面积是： "<<figure(a,b,c)<<endl;
} 
