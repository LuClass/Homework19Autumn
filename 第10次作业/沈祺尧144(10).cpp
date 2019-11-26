#include <iostream>
#define people 21
using namespace std;
void out(int a[],int n)
{
	a[n]-=1;
}
int stay(int a[],int n)
{
	int num=0;
	for(int i=0;i<n;i++)
	    if(a[i])
	    num++;
	    return num;
}
void begin(int a[],int n)
{
	for(int i=0;i<n;i++)
	a[i]=1;
}
int last(int a[],int n)
{
	int i=0;
	for(;i<n;i++)
	if(a[i])
	break;
	return i;
}
int process(int a[],int n)
{
	int m=0;
	for(int i=0;stay(a,people)!=1;i++)
	{
		if(a[i])
		{
			m++;
			if(m%5==0)
			out(a,i);
		}
	if(i==people-1)
	i=-1;
	}
	return last(a,people);
}
int main()
{
	int a[people]={0};
	begin(a,people);
	cout<<process(a,people)+1;
}
