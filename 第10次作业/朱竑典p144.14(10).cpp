#include<iostream>
using namespace std;
#define m 21
#define n 5
int main()
{
	int a[m],sum=0,x,count=0;
	for(int i=0;i<m;i++)
		a[i]=1;
	for(int i=0;;i++)
	{
		x=i%m;
		if(a[x])
		{
			sum+=a[x];
			if(sum%n==0)
			{
				a[x]=0;
				count++;
				if(count==m-1) 
					break;
			}
		}
	}
	for(int i;i<m;i++)
		if(a[i]==1)
			cout<<i+1<<'\t';
	return 0;
}
