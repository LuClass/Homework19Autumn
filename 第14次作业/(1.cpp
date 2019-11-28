#include<iostream>
#include<math.h>
#include<string>
using namespace std;
struct A{
	double x,y;
    string s;
};
A f(int a,int b,int c)
{
	A emp;
	double t;
	t=b*b-4*a*c;
	if(t<0)
    emp.s="нч";
	if(t==0)
	emp.x=(-b)/(2*a);
	if(t>0)
	{
		emp.x=(-b+sqrt(t))/(2*a);
		emp.y=(-b-sqrt(t))/(2*a);
	}
	return emp;
}
int main()
{
	int a,b,c;
	A e;
	e=f(a,b,c);
	cin>>a>>b>>c;
	cout<<e.x<<e.y<<e.s<<endl;
}
