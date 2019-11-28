#include<iostream.h>
#include<math.h>
double fun(double a,double b,double c)
{      double s,area;
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
       return area;
}
void main()
{    double a,b,c;
     cin>>a>>b>>c;
	 cout<<fun(a,b,c);
}