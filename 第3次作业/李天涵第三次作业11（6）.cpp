using namespace std;
#include<iostream>
#include<cmath>
int main(void)
{
    double a,b,c;
	cin>>a>>b>>c;
	double d,i,j;
	d=b*b-4*a*c;
	if(d<0) cout<<"该方程无实根。";
	else if(d==0)
	{
		i=-b/(2*a);
		cout<<"该方程有两个相等的实根"<<i; 
		 }
		 else
		 {
		 	i=(-b+sqrt(d))/(2*a);
		 	j=(-b-sqrt(d))/(2*a);
		 	cout<<"该方程有两个不等的实根"<<i<<" "<<j;
			  }     
    return 0;
 } 
