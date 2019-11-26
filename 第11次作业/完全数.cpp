#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"请输入两个整数i j(i<j):";
	cin>>i>>j;
	cout<<i<<"到"<<j<<"之间的完全数有：";
	int sum,m;
	for(int k=i;k<=j;k++)
	{
		sum=1;
		for(int m=2;m<=k/2;m++)
		{
			if(k%m==0)
			{
				sum+=m;
			}
		}
		if(sum==k)
		cout<<k<<" ";
	}
	return 0;
}

