using namespace std;
#include <iostream>
#include <math.h>
struct Point{
	int x,y;
};
double len(Point point1,Point point2)
{
	double length;
	length=sqrt(pow((point1.x-point2.x),2)+pow((point1.y-point2.y),2));
	return length;
}
struct tri{
	Point point1,point2,point3;
};
bool isTri(double a,double b,double c)
{
	if(a+b>c&&a+c>b&&b+c>a)
	{
		return 1;
	}
	else
	return 0;
}
double C(double a,double b,double c)
{
	return a+b+c;
}
double S(double a,double b,double c)
{
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
	tri t;
	cin>>t.point1.x>>t.point1.y>>t.point2.x>>t.point2.y>>t.point3.x>>t.point3.y;
	if(isTri(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3)))
	{
		cout<<"周长:"<<C(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3))<<endl;
		cout<<"面积:"<<S(len(t.point1,t.point2),len(t.point1,t.point3),len(t.point2,t.point3))<<endl;
	}
	else
	{
		cout<<"无法构成三角形" ; 
	}
	return 0;
}
