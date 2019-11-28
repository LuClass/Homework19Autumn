/*
(9)已知三角形的三条边长为 a、b、c，则三角形的面积为：
其中 s=(a+b+c)/2。设计一个函数求三角形的面积。 
*/ 
#include<iostream>
#include<math.h>
#define s(a,b,c) (a+b+c)*0.5
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
using namespace std;
int main(){
	float a,b,c;
	cout<<"请输入三角形的长宽高"<<endl;
	cin>>a>>b>>c;
	cout<<"三角形的面积是： "<<area(a,b,c)<<endl;
} 
