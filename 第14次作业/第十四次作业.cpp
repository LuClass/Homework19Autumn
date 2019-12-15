(1).
#include <iostream>
#include <math.h>
using namespace std;
int f(int a,int b,int c)
{
	struct X{
		double x1,x2;
	}t;
	if(b*b-4*a*c<0)
	return false;
	else
	{
		t.x1=((-b+sqrt(b*b-4*a*c))/(2*a));
		t.x2=((-b-sqrt(b*b-4*a*c))/(2*a));
		
	}
	return t.x1,t.x2;
}
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<f(a,b,c)<<endl;
	return 0;
}

(2).
#include <iostream>
#include <math.h>
using namespace std;
float f(float d)
{
	struct Point{
		int x,y;
	}d1,d2;
	d=sqrt(((d1.x-d2.x)*(d1.x-d2.x))+((d1.y-d2.y)*(d1.y-d2.y)));
	return d;
}
int f1(int t,int area)
{
	int s;
	struct San{
		int d
	}x1,x2,x3;
	s=(x1.d+x2.d+x3.d)/2;
	if(x1.d+x2.d>x3.d&&x1.d+x3.d>x2.d&&x3.d+x2.d>x1.d)
	{
		t=x1.d+x2.d+x3.d;
		area=sqrt(s*(s-x1.d)*(s-x2.d)*(s-x3.d));
		return t,area;
	}
	else 
	{
		return false;
	}
}
