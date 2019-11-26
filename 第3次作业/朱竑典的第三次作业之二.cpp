#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	float a,b,c,X;
	cin>>a;
	cin>>b;
	cin>>c; 
	X=b*b-4*a*c;
	cout<<"a*x^2+b*x+c=0"<<endl;
	float x1,x2,x3;
	if(X<0)
	cout<<"此方程无实根。"<<endl;
	if(X==0)
	{x3=-b/2/a; 
	cout<<"此方程有一个实根。"<<x3<<endl;}
	if(X>0)
	{x1=(-b+sqrt(X)/2/a);
	 x2=(-b-sqrt(X)/2/a);
	cout<<"此方程有两个实根。"<<endl;
	}
	return 0; 
}
