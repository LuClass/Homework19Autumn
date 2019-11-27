using namespace std;
#include <iostream>
#include <math.h>
struct Point{
	int x;
	int y;
};
double d(int a,int b,int e,int f)
{
	double n;
	n=sqrt((a-e)*(a-e)+(b-f)*(b-f));
	return n;
}
struct length{
	double g;
	double h;
	double i;
};
bool isjio(double g,double h,double i)
{
	if((g+h)>i&&(g+i)>h&&(h+i)>g)
	{
		return true;
	}
	else
	{
		return false;
	}
}	
double C(double g,double h,double i)
{
	double a;
	a=g+h+i;
	return a;
}
double area(double g,double h,double i)
{
	double s,b;
	s=(g+h+i)/2;
	b=sqrt(s*(s-g)*(s-h)*(s-i));
	return b;
}
int main()
{
	Point a={1,2};
	Point b={3,4};
	Point c={2,1};
	cout<<d(a.x,a.y,b.x,b.y)<<endl;
	length e={d(a.x,a.y,b.x,b.y),d(a.x,a.y,c.x,c.y),d(c.x,c.y,b.x,b.y)};
	if(isjio(e.g,e.h,e.i))
	{
		cout<<C(e.g,e.h,e.i)<<endl;
		cout<<area(e.g,e.h,e.i)<<endl;
	}
	else
	{
		cout<<"不构成三角形"<<endl; 
	}
	return 0;
}
