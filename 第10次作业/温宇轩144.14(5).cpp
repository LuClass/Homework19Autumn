#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int Sum1(int n)
{
	int sum=0,a=0;
	while(n>9)
	{
		a=n%10;
		sum+=a;
		n/=10;
	}
	sum+=n;
	return sum;
}

int Sum2(int n)
{
	int sum=0;
	while(!isPrime(n))
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				sum+=Sum1(i);
				n/=i;
			}
		}
	}
	sum+=Sum1(n); 
	return sum;
}

bool isSmith(int n)
{
	if(Sum1(n)==Sum2(n))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}

int main()
{
	int i=4937774;
	while(1)
	{
		if(isSmith(i))
		{
			cout<<i;
			break;
		}
		else
		{
			i++;
		}
	}
	return 0;
	
}
