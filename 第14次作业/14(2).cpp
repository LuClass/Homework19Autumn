using namespace std;
#include <iostream>
#include <math.h>
struct point{
	int x;
	int y;
};
double f(int a,int b,int c,int d)
{
	double dis;
	dis=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	return dis;	
}
struct length{
	double d;
	double e;
	double f;
};
bool triangle(double x,double y,double z)
{
	if(x+y<=z||x+z<=y||y+z<=x)
	return true;
	return false;
}
void C(double x,double y,double z)
{
	double c;
	c=x+y+z;
	cout<<"周长为："<<c<<endl; 
}
void S(double x,double y,double z)
{
	double s,c;
	c=(x+y+z)/2;
	s=sqrt(c*(c-x)*(c-y)*(c-z));
	cout<<"面积为："<<s<<endl;
}
int main()
{
	point a={1,2};
	point b={2,4};
	point c={9.5};
	cout<<f(a.x,a.y,b.x,b.y)<<endl;
	length m={f(a.x,a.y,b.x,b.y),f(a.x,a.y,c.x,c.y),f(b.x,b.y,c.x,c.y)};
	if(triangle(m.d,m.e,m.f)) cout<<"不能构成三角形"<<endl;
	else 
	{
		C(m.d,m.e,m.f);
		S(m.d,m.e,m.f);
	}
	return 0;
}
