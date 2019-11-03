using namespace std;
#include <iostream>
#include <math.h>
void area(double x,double y,double z)
{
	double s,result;
	s=(x+y+z)/2;
	result=sqrt(s*(s-x)*(s-y)*(s-z));
	cout<<"三角形的面积是："<<result;
 } 
 int main()
 {
 	double a,b,c;
 	cin>>a>>b>>c;
 	area(a,b,c);
 	return 0;
 }
