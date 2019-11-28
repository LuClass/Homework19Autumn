#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	double a,b,c,d;
	cin>>a>>b>>c;
	cout<<a<<"*x^2+"<<b<<"*x+"<<c<<"=0"<<endl;
	d=b*b-4*a*c;
	if (d<=0)
	{
		if (d==0)
		{
			cout<<"x="<<(-b)/(2*a);
		}
		else
		{
			cout<<"none";
		}
	}
	else
	{
		cout<<"x1="<<((-b)+sqrt(d))/(2*a)<<' '<<"x2="<<((-b)-sqrt(d))/(2*a);
	}
	return 0;
}