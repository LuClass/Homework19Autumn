using namespace std;
#include <iostream>
int getSet(int rs[],const int a[],int n)
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
	return counter;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int rs[n];
	cout<<getSet(rs,a,n)<<endl;
	for(int j=0;j<getSet(rs,a,n);j++)
	{
		cout<<rs[j]<<" ";
	}
	return 0;
}
