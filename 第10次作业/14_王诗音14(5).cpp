#include<iostream>
using namespace std;
#define m 4937774

int Sum(int x)
{
	int sum,t;
	t=x;
	sum=0;
	while(t)
	{
		sum=sum+t%10;
		t/=10;
	}
	return sum;
}

bool isSmith(int n)
{
	int a[31],t,j=0,sum=0;
	t=n;
	for(int i=2;i*i<=t;i++)
	{
		if(t%i==0)
		{			
			a[j]=i;
			j++;
			t/=i;
			i=1;
		}		
	}
	a[j]=t;
	if (t==n) return 0;
	else
	{
		for(int i=0;i<=j;i++)
			sum+=Sum(a[i]);
		if(Sum(n)==sum)  return 1;
		else return 0;
	}
 } 
 
 int main()
 {
 	for(int i=m;;i++)
 		if(isSmith(i))
 		{
 			cout<<i;
 			break;
		 }
 }
