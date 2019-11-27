#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double area,a,b,c,s;
	cin>>a>>b>>c;
	#define s ((a+b+c)/2)
	#define area sqrt(s*(s-a)*(s-b)*(s-c))
	cout<<area;
	return 0;
} 
