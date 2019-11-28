#include <iostream>
#include <math.h> 
using namespace std;
//设计函数
float area(float a,float b,float c)
{
	float s=0,area=0;
	s=(a+b+c)/2;
	area= sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
} 

int main (void)
{
	float a=0,b=0,c=0;
	cout<<"计算三角形的面积"<<endl;
	cout<<endl;
	cout<<"请输入三角形的三条边长"<<endl; 
	cin>>a>>b>>c;
	if (area(a,b,c)==0)
		cout<<"该三角形不存在"<<endl;
	else
		cout<<"三角形的面积="<<area(a,b,c)<<endl;
	return 0;
}
