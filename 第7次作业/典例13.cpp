#include<iostream>
using namespace std;
int main()
{
	for(int i=100;i<1000;i++)
	{
		int x,s=0,a;
		a=i;
		for(;a>0;)
		{
			x=a%10;
			a=a/10;
			s=s+x*x*x;
		}
		if(s==i)
		cout<<i<<'\t';
	}
	return 0;
}
