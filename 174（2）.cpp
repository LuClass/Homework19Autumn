using namespace std;
#include <iostream>
#include <math.h>
struct Point//平面上的点 
{
	int x;
	int y;
};
double d(int a,int b,int c,int d)//两点间距离 
{
	double n;
	n=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return n;
}
struct l//三边长 
{
	double h;
	double f;
	double g;
};
bool sanjiao(double e,double f,double g)//判断是否是三角形 
{
	if((e+f)>g&&(e+g)>f&&(f+g)>e)
	  return true;
	else
	  return false;
}
double C(double e,double f,double g)//三角形周长 
{
	double c;
	c=e+f+g;
	return c; 
}
double area(double e,double f,double g)//三角形面积 
{
	double k,s;
	k=(e+f+g)/2;
	s=sqrt(k*(k-e)*(k-f)*(k-g));
	return s;
}
int main()
{
	Point a;
	Point b;
	Point c;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	cin>>c.x>>c.y;
	cout<<d(a.x,a.y,b.x,b.y)<<endl;
	cout<<d(a.x,a.y,c.x,c.y)<<endl;
	cout<<d(b.x,b.y,c.x,c.y)<<endl;
	l e={d(a.x,a.y,b.x,b.y),d(a.x,a.y,c.x,c.y),d(b.x,b.y,c.x,c.y)};
	if(sanjiao(e.f,e.g,e.h))
	{
	  cout<<C(e.g,e.h,e.f)<<endl;
 	  cout<<area(e.g,e.h,e.f)<<endl;
    }
 	else
 	  cout<<"不构成三角形"<<endl; 
	return 0;
}
