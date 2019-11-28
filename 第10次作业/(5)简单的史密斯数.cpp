using namespace std;
#include <iostream>
bool su(int n)
{	
    if(n==2||n==3||n==5||n==7)
	{
		return true;
	}
	if(n<2||n%2==0)
	{
		return false;
	}

	for(int i=3;i*i<=n;i+=2)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int sum(int n)
{
	int res=0;
	while(n!=0)
	{
		res=res+n%10;
		n=n/10;
	}
	return res;
}
int factor(int n)
{
	int a,res;
	res=0;
	while(n!=1)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				if((i/10)!=0)
				{
					res=res+sum(i);
					a=i;
					break;
				}
				else
				{
				    res=res+i;
				    a=i;
				    break;	
				}
			}
		}
		n=n/a;
	}
	return res;
}
bool isSmith(int n)
{
	if(su(n))
	{
		return false;
	}
	else if(sum(n)==factor(n))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int n;
	cin>>n;
	while(isSmith(n)==0)
	{
		n=n+1;
	}
	cout<<n;
	return 0;
}
