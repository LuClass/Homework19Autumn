using namespace std;
#include <iostream>
#include <math.h>
double area(double a,double b, double c)
{
	double s,res;
	s=(a+b+c)/2;
	res=sqrt(s*(s-a)*(s-b)*(s-c));
	return res;
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	cout<<area(a,b,c);
	return 0; 
}
