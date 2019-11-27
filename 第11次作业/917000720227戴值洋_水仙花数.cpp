#include <iostream>
using namespace std;
#include <math.h>
int main()
{
	int i,j;
	cout<<"请输入两个整数i j(i<j):";
	cin>>i>>j;
	int sum,a,K; 
	cout<<i<<"到"<<j<<"之间的水仙花数有：";
	for(int k=i;k<=j;k++)
	{
		sum=0;
		K=k;
		while(K!=0)
		{
			a=K%10;
			sum+=pow(a,3);
			K/=10;
		}
		if(sum==k)
		cout<<k<<" ";
	}
	return 0;
} 
