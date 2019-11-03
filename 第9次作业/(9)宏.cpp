using namespace std;
#include <iostream>
#include <math.h>
#define S(x,y,z) (x+y+z)/2
#define A(s,x,y,z) sqrt(s*(s-x)*(s-y)*(s-z))
int main()
{
	double a,b,c,s,area;
	cin>>a>>b>>c;
	s=S(a,b,c);
	area=A(s,a,b,c);
	cout<<"三角形的面积为："<<area;
	return 0;
 } 
