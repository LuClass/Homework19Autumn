#include <iostream>
using namespace std;
#include <math.h>

struct calculate {
	int count;
	double x1,x2;
};
calculate f(int a,int b,int c)
{
	calculate x;
	double m=b*b-4*a*c;
	if(a!=0&&m!=0)
	{
		if(m>0)
		{
			x.count=2;
			x.x1=(-b+sqrt(m))/(2*a);
			x.x2=(-b-sqrt(m))/(2*a);
			return x;
		}
		else
		{
			x.count=0;
			cout<<"нч╫Б"; 
			return x;
		}
	}
	else
	{
		x.count=1;
		x.x1=x.x2=-b/(2*a);
		return x;
	}
}

int main()
{
	calculate n=f(2,3,1);
	cout<<"count="<<n.count<<endl;
	cout<<"x1="<<n.x1<<" x2="<<n.x2;
	return 0;
}

