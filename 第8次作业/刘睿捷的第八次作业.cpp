#include<iostream>
using namespace std;

int gys (int a,int b)
{
	cout<<a<<"和"<<b<<"的最大公约数是";
	for (int x=(a>b?b:a);x>0;x--)
	{
		if ((a%x==0)&&(b%x==0))
		{
			cout<<x<<endl;
			return 0;
		}
	}
	return 0;
}

int gbs (int a,int b)
{
	cout<<a<<"和"<<b<<"的最小公倍数是";
	for (int y=(a>b?a:b);y>0;y++)
	{
		if ((y%a==0)&&(y%b==0))
		{
			cout<<y<<endl;
			return 0;
		}
	}
	return 0;
}

int bottom_up (int a)
{
	if (a%10!=0||a!=0)
	{
		cout<<a%10;
		bottom_up(a/10);
	}
	else 
		return 0;
}

int main (void)
{
	cout<<"p110 t21 (6):"<<endl<<endl;
	int a,b;
	cout<<"please input two int:";
	cin>>a>>b;
	gys(a,b);
	gbs(a,b);
	
	cout<<endl<<endl<<"p110 t21 (7) (i):"<<endl<<endl;
	int x;
	cout<<"please input an int:";
	cin>>x;
	bottom_up(x);
	
	cout<<endl<<endl<<"p110 t21 (7) (ii):"<<endl<<endl;
	
	for (a=x;a!=0||a%10!=0;a/=10)
	{
		cout<<a%10;
	}

	cout<<endl<<endl<<"end";
	return 0;
}