#include<iostream>
#include<cmath>
using namespace std;
void f(double a,double b,double c)
{
	double s,area;
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area;	
}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	f(x,y,z);
}
