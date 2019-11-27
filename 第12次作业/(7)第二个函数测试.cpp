using namespace std;
#include <iostream>
int getSet(int rs[],int sum[],const int a[],int n)
{
	int counter=1;
	bool flag;
	rs[0]=a[0];
	for(int i=1;i<n;i++)
	{
		flag=true;
		for(int j=0;j<counter;j++)
		{
			if(a[i]==rs[j])
			{
				flag=false;
			}
		}
		if(flag==true)
		{
			rs[counter++]=a[i];
		}
	}
	for(int e=0;e<counter;e++)
	{
		sum[e]=0;
	}
	for(int k=0;k<counter;k++)
	{
		for(int l=0;l<n;l++)
		{
			if(a[l]==rs[k])
			{
				sum[k]=sum[k]+1;
			}
		}
	}
	return counter;
}
int main()
{
	int n,counter;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int rs[n];
	int sum[n];
	counter=getSet(rs,sum,a,n);
	cout<<counter<<endl;
	for(int j=0;j<counter;j++)
	{
		cout<<sum[j]<<" ";
	}
	return 0;
}
