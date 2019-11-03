using namespace std;
#include <iostream>
#include <math.h>
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))
int main()
{
	int a,b,c,s;
	cin>>a>>b>>c;
	s=(a+b+c)/2.0;
	cout<<area(s,a,b,c);
}
