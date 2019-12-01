// P110.21(6)

#include <iostream>
#include<stdlib.h>
using namespace std;

int maxgys(int a,int b)
{
	int yushu,c;
	if (a>b)
	{
		while (b>0)
		{
			yushu=a%b;
			a=b;b=yushu;
		}
		return a;
	}
	else
	{
		c=a;a=b;b=c;
		while (b>0)
		{
			yushu=a%b;
			a=b;b=yushu;
		}
		return a;
	}
}

int mingbs(int c,int d)
{
	int m;
	m=c*d/maxgys(c,d);
	return m;
}

int main (void)
{
	int j,k;
	cout<<"计算两个整数的最大公约数和最小公倍数"<<endl;
	cout<<'\n';
	cout<<"请输入两个正整数"<<endl;
	cin>>j>>k;
	cout<<'\n';
	cout<<"最大公约数为："<<' '<<maxgys(j,k)<<endl;
	cout<<"最小公倍数为："<<' '<<mingbs(j,k)<<endl;
	system("pause");
	return 0;
}

// P110.21(7)  method 1

#include<iostream>
#include<stdlib.h>
using namespace std;

int main (void)
{
	unsigned i,j,n=10;
	cout<<"请输入一个正整数"<<endl;
	cin>>i;
	for ( ;j!=0;i=i/n)
	{
		j=i%n;
		if (j!=0)
		cout<<j;
	}
	system("pause");
	return 0;
}

// P110.21(7) method 2

#include<iostream>
#include<stdlib.h>
using namespace std;

void f(long i)
{
	cout<<i%10;
	if (i>9)
	f(i/10);
}	
int main (void)
{
	unsigned i;
	cout<<"请输入一个正整数"<<endl;
	cin>>i;
	f(i);
	system("pause");
	return 0;
}