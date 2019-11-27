#include <iostream>
#include <math.h>
using namespace std;
struct Point
{
    int x;
    int y;
};

float Distance(Point P1,Point P2)
{
	return sqrt((P1.x-P2.x)*(P1.x-P2.x)+(P1.y-P2.y)*(P1.y-P2.y));
}

struct side
{
	double a;
	double b;
	double c;
} ;

bool Triangle(double a,double b,double c)
{
	if(a+b<=c||a+c<=b||b+c<=a)
 	   return true;
 	return false;
} 

void C(double x,double y,double z)
{
 	double c;
 	c=x+y+z;
 	cout<<"周长为"<<c<<endl;
}
 
 void S(double x,double y,double z)
{
 	double s,c;
 	c=(x+y+z)/2;
 	s=sqrt(c*(c-x)*(c-y)*(c-z));
 	cout<<"面积为"<<s<<endl;
}

int main()
{
	Point P1={1,2};
	Point P2={3,6};
	Point P3={1,0};
	side sid={Distance(P1,P2),Distance(P1,P3),Distance(P2,P3)};
	if (Triangle(sid.a,sid.b,sid.c)) 
	   cout<<"不能构成三角形"<<endl;
	else 
 	{
 		C(sid.a,sid.b,sid.c);
 		S(sid.a,sid.b,sid.c);
 	}
 	return 0;
}
