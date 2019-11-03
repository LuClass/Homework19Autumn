using namespace std;
#include <iostream>
#include <math.h>
int main()
{
	int a,b,c,s,area;
	cin>>a>>b>>c;
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area;
	return 0;
}
