using namespace std;
#include <iostream>
int sum(int n)
{
	int res;
	res=1;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				res=res+i;
			}
		}
	return res;
}
int main()
{
	int i,j;
	cin>>i>>j;
	for(int k=i;k<=j;k++)
	{
		if(k==sum(k))
		{
			cout<<k<<" ";
		}
	}
	return 0;
}
