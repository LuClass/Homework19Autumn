//第六小问 
using namespace std; 
#include <iostream>
#include <math.h>
int main (void)

{
	float a,b,c,n,x1,x2,x;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	n=b*b-4*a*c;
	if (n<0)
	  cout<<"方程无根"<<endl;
	else if (n==0)
	  {
	   cout<<"方程有一个根"<<endl; 
	   cout<<"x="<<-b/2*a<<endl; 
	   } 
	else
	  {
	  	cout<<"方程有两个根"<<endl;
		cout<<"x1="<<(-b+sqrt(n))/2*a<<endl;
		cout<<"x2="<<(-b-sqrt(n))/2*a<<endl;
       }
    return 0;
}
