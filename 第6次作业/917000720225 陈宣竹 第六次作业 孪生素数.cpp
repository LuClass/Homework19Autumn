bool prime(unsigned n)
{
	if(n<2)
	{
		return false;
	}
	if(n==2)
	{
		return true;
	}
	for(unsigned i=2;i<n;i++)
		{
			if(n%i==0)
			{
				return false;
			}
		}
	return true;
}
using namespace std;
#include <iostream>
int main()
{
	for(int i=2;i<=500;i++)
	{
		if(prime(i)&&prime(i+2))
		{
			cout<<i<<"ºÍ"<<i+2<<endl;
		}
	}
	return 0; 
}
