#include<iostream.h>
#include<math.h>
#define s ((a+b+c)/2)
#define area(a,b,c) s*(s-a)*(s-b)*(s-c)
void main()
{    double a,b,c;
     cin>>a>>b>>c;
	 cout<<sqrt(area(a,b,c));
}
