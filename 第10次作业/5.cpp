#include <iostream>
using namespace std;
int zs(int n)
{ 
	for (int i=2;i<n;i++)
		if (n%i==0)
			return 0;
	return 1;
}
int zh(int n)    
{
	int r=0;
	while (n)
	{
		r+=n%10;
		n=n/10;
	}
	return r;
}
int main() 
{	int n,sum=0,m;
	cin>>n;
    m=n;
	while(m>1)
	{
		for (int i=2;i<=m;i++)
			if (m%i==0&&zs(i)==1)
			{
			   sum+=zh(i);
				m=m/i;
				break;
			}
	}
	if (sum==zh(n))
		cout<<"this is a smith number";
	else
		cout<<"this is not a smith number";
	return 0;
}
