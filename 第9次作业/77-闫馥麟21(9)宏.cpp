#include <iostream>
#include <math.h> 
using namespace std;
//设计宏 
#define S(a,b,c) (a+b+c)/2
#define A(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c)) 

int main (void)
{
	float a=0,b=0,c=0,area=0,s=0;
	cout<<"计算三角形的面积"<<endl;
	cout<<endl;
	cout<<"请输入三角形的三条边长"<<endl; 
	cin>>a>>b>>c;
	s=S(a,b,c);
	area=A(s,a,b,c);
	if (area==0)
		cout<<"该三角形不存在"<<endl;
	else
		cout<<"三角形的面积="<<area<<endl;
	return 0;
}
