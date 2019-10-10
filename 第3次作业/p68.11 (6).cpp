#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a,b,c,d,x1,x2;
	cout<<"a="<<endl;
	cin>>a;
	cout<<"b="<<endl;
	cin>>b;
	cout<<"c="<<endl;
	cin>>c;
	d=b*b-4*a*c;
    if(d==0)
	{
	x1=x2=-b/(2*a); 
	cout<<"方程有两个相等实数根"<<x1<<endl;}
    else if(d<0)
         cout<<"方程无根"<<endl;	
	    else
	    {
	    x1=(-b+sqrt(d))/(2*a);
	    x2=(-b-sqrt(d))/(2*a);
	    cout<<"方程有两个不相等实数根"<<x1<<x2<<endl;}
	} 
