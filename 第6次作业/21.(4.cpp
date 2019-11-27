#include<iostream>
using namespace std;
int S(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		break;
	}
	if(i>=x)
	return 1;	
	else
	return 0;
	
}
int main()
{
	for(int i=2;i<500;i++)
	{
		if(S(i)&&S(i+2))
		{
			cout<<i<<','<<i+2<<endl;
		}
	}
	return 0;
}
