#include<iostream>
using namespace std;

int flower(void)
{
	int a,b,n=0;
	cout<<"please set limit (min max) : ";
	cin>>a>>b;
	for (int x=a;x<=b;x++)
	{
		int k=x,sum=0;
		while(k!=0)
		{
			sum+=(k%10)*(k%10)*(k%10);
			k/=10;
		}
		if(sum==x)
		{
			n++;
			cout<<x<<endl;
		}
	}
	if(n==0)
	{
		cout<<"no water flower!"<<endl<<endl<<endl;
	}
	return 0;	
}

int huiwen(void)
{
	long int x,t1,t2;
	int n=0;
	cout<<"please input an int:";
	cin>>x;
	t1=x;
	t2=x;
	while(t1!=0)
	{
		n++;
		t1/=10;
	}
	int a[n+1],y=1;
	while(t2!=0)
	{
		a[y]=t2%10;
		t2/=10;
		y++;
	}
	for(int k=1;k<=n/2;k++)
	{
		if(a[k]!=a[n-k+1])
		{
		cout<<"NO"<<endl<<endl<<endl;
		return 0;
		}
			
	}
	cout<<"YES"<<endl<<endl<<endl;
	return 0;	
}

int perfect(void)
{
	int a,b,n=0;
	cout<<"please set limit (min max) :";
	cin>>a>>b;
	for (int t=a;t<=b;t++)
	{
		int sum=0;
		for(int k=1;k<t;k++)
		{
			if(t%k==0)
			{
				sum+=k;
			}
		}
		if(sum==t)
		{
			n++;
			cout<<t<<endl;
		}
	}
	if(n==0)
	{
		cout<<"no perfect!"<<endl;
	}
	return 0;
}

int main(void)
{
	cout<<"(1):";
	flower();
	cout<<"(2):";
	huiwen();
	cout<<"(3):";
	perfect();
	return 0;
}
