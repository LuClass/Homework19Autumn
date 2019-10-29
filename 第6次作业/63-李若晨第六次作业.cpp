#include<iostream>
#include<iomanip>
using namespace std;

int jc(int n,int k)
{
	int ji1=1;
	for (int a=n;a>0;a--)
	{
		ji1*=a;
	}
	int ji2=1;
	for (int b=k;b>0;b--)
	{
		ji2*=b;
	}
	int ji3=1;
	for (int c=n-k;c>0;c--)
	{
		ji3*=c;
	}
	return ji1*1.0/(ji2*ji3);
}

bool zs(int x)
{
	for (int a=2;a<=x/2;a++)
	{
		if (x%a==0)
			return false;
	}
	return true;
}

int fj(int t)
{
	int key=1;
	cout<<t<<"=";
	while (key==1)
	{
	for (int a=2;a<=t;a++)
	{
		if (t%a==0)
		{
			if (t!=a)
			{
				cout<<a<<"*";
				t/=a;
				break;
			}
			else
			{
				key=0;
				cout<<a<<endl;
				return 0;
			}
		}
	}
	}
}

int main(void)
{
	cout<<"p110 t21 (2):"<<endl<<endl;
	cout<<setw(4)<<jc(4,2)<<endl<<setw(4)<<jc(6,4)<<endl<<setw(4)<<jc(8,7)<<endl;
	
	cout<<endl<<"p110 t21 (4):"<<endl<<endl;
	for (int b=3;b<=497;b++)
	{
		if (zs(b)&&zs(b+2))
			cout<<setw(4)<<b<<setw(4)<<b+2<<endl;
	}
	
	cout<<endl<<"p110 t21 (5)"<<endl<<endl;
	int p;
	cout<<"please input an int(>=2):"<<endl;
	cin>>p;
	fj(p);
	cout<<endl<<"end";
	
	return 0;
}