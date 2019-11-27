#include<iostream.h>
int fun(int n)
{   int sum=0;
	while(n)
	{    sum+=(n%10)*(n%10)*(n%10);
	     n/=10;
	}
	return sum;
}
void main()
{    int i,x,y;
     cin>>x>>y;
     for(i=x;i<=y;i++)
	     if(fun(i)==i)
			 cout<<i<<'\t';
}