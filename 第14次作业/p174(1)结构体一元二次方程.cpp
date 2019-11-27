using namespace std;
#include <iostream>
#include <math.h>
struct com{
		double d;
		double e;
		double g;
	};
com f(int a,int b,int c)
{
    com data; 
	data.d=b*b-4*a*c;
	data.e=-b;
	data.g=2*a;
	return data;
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	com data;
	data=f(a,b,c);
	if(data.g==0)
	{
		cout<<"方程不是一元二次方程"<<endl; 
	}
	else
	{
		if(data.d<0)
		{
			cout<<"方程没有实数根"<<endl; 
		}
		else if(data.d==0)
		{
			cout<<data.e/data.g<<endl;
		}
		else
		{
			cout<<(data.e+sqrt(data.d))/data.g<<" "<<(data.e-sqrt(data.d))/data.g<<endl;
		}
	}
	return 0;
}
