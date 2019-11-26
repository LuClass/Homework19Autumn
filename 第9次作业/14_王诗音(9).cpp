#include<iostream>
#include<math.h>
using namespace std;

#define S(a,b,c) (a+b+c)/2

double area(double s,double a,double b,double c)
{
	return(sqrt(s*(s-a)*(s-b)*(s-c)));
}

int main()
{
	double a,b,c,s;
	cin>>a>>b>>c;
	s=S(a,b,c);
	cout<<area(s,a,b,c)<<endl;
	return 0;
}
