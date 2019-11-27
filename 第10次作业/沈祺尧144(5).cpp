#include <iostream>
using namespace std;
bool isPrime(unsigned n)
{
	if (n<2)
	    return false;
	if (n==2||n==3||n==5||n==7)
	    return true;
	for (int i=2;i*i<=n;i++)
	     if(n%i==0)
	        return false;
	return true;
}

int sum1(int n)
{
	int sum=0;
	while(n!=0)
	{
	    sum+=n%10;
	    n=n/10;
	} 
	return sum; 
}

int sum2(int n)
{
	int sum=0;
	for(int i=2;i<=n;i++)
		 while(n%i==0)
		{
	        	sum+=sum1(i);
	        	n=n/i;
		}				
	return sum;
}

bool isSmith(int n)
{
	if(isPrime(n)||sum1(n)!=sum2(n))
	return false;
	return true;
}
int main()
{
	int a;
	cin>>a;
	while(!isSmith(a))
	a++;
	cout<<a;
}
