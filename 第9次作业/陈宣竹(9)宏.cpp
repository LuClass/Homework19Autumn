using namespace std;
#include <iostream>
#include <math.h>
#define AREAR(a,b,c) sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c))
int main()
{
	double a,b,c;
	cin>>a>>b>>c; 
	cout<<AREAR(a,b,c);
	return 0;
}
