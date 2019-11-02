#include<iostream>
using namespace std;
int main()
{
	int x,sum=0,y=100;
	cin>>x;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			cout<<i<<"  ";
		    sum+=i;
		}
	}
	cout<<endl;
	for(int k=1;k<=y;k++)
	{
		for(int j=1;j<k;j++)
		{
			if(k%j==0)
			sum+=j;
		}
		if(sum==k)
		cout<<k<<"  ";
	}
	return 0;
}
