#include<iostream>
using namespace std;
int main(void)
{
	int x=1;
	while(x<101)
	{
		int n=1,i=0;	
		while(n<x)
		{
			if(x%n==0)
			i+=n;
			n++;
		}
		if(x==i)
		cout<<x<<'\n';
		x++;
	} 
	return 0;
} 
