using namespace std;
#include <iostream>
int main()
{
	int n,i,j,k,sum;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	for(j=1;j<=100;j++)
	{
		sum=0;
		for(k=1;k<j;k++)
		{
			if(j%k==0)
			{
				sum+=k;
			}
		}
		if(sum==j)
		{
			cout<<j<<" ";
		}
	}
	return 0;
}
