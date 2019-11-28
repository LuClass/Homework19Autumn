#include <iostream>
using namespace std;
#include <math.h>

struct calculate {

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

			x.x1=(-b+sqrt(m))/(2*a);

			x.x2=(-b-sqrt(m))/(2*a);

			return x;

		}

	}

	else

	{

		x.x1=x.x2=-b/(2*a);

		return x;

	}

}

int main()

{

	int a,b,c;

	cin>>a>>b>>c; 

	calculate n=f(a,b,c);

	cout<<"x1="<<n.x1<<" x2="<<n.x2;

	return 0;

}
