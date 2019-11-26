#include<iostream>
using namespace std;
#define S(a,b,c) (a+b+c)/2
#include <math.h>

int main()
{
	int area,a,b,c;
	cin>>a>>b>>c;
	area = sqrt(S(a,b,c)*(S(a,b,c)-a)*(S(a,b,c)-b)*(S(a,b,c)-c));
	cout<<area<<endl;
	return 0;
	
}


