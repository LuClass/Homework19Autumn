#include<iostream>
using namespace std;
int parallelogram(int l,int h)
{
	for (int i=1;i<=h;i++)
	{
		for (int x=1;x<=i;x++)
		{
			cout<<' ';
		}
		for (int j=1;j<=l;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for (int i=1;i<=h;i++)
	{
		for (int x=1;x<=h+1-i;x++)
		{
			cout<<' ';
		}
		for (int j=1;j<=l;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
int main(void)
{
	cout<<"50�⣺��2�⣺"<<endl<<endl;
	
	int a,x;
	cout<<"please intput the profit:"<<endl;
	cin>>x;
	switch (x/100000)
	{
		case 0:a=x*0.1;
			break;
		case 1:a=(x-100000)*0.075+10000;
			break;
		case 3:		
		case 2:a=(x-200000)*0.05+7500+10000;
			break;
		case 5:	
		case 4:a=(x-400000)*0.03+10000+7500+10000;
			break;
		case 7:
		case 8:
		case 9:	
		case 6:a=(x-600000)*0.015+6000+10000+7500+10000;
			break;
		case 10:a=(x-1000000)*0.01+6000+6000+10000+7500+10000;
			break;
		default:a=(x-1000000)*0.01+6000+6000+10000+7500+10000;		
	}
	cout<<"bonus="<<a;
	cout<<endl<<endl;
	
	cout<<"50�⣺��13�⣺"<<endl<<endl;
	
	for (int x=100;x<=999;x++)
	{
		if (x==(x%10)*(x%10)*(x%10)+(x/10%10)*(x/10%10)*(x/10%10)+(x/10/10%10)*(x/10/10%10)*(x/10/10%10))
			cout<<x<<endl;
	}
	cout<<endl;
	
	cout<<"50�⣺��16�⣺"<<endl<<endl;
	
	int m,n;
	cout<<"please input two int m,n(>0):";
	cin>>m>>n;
	for (int a=(m<n?m:n);a>0;a--)
	{
		if (m%a==0&&n%a==0)
		{
			cout<<m<<","<<n<<"�����Լ����"<<a<<endl;
			break;
		}			
	}
	for (int b=(m>n?m:n);;b++)
	{
		if (b%m==0&&b%n==0)
		{
			cout<<m<<","<<n<<"����С��������"<<b<<endl;
			break;
		}			
	}
	
	cout<<"50�⣺��23�⣺"<<endl;
	int l,h;
	cout<<"������ƽ���ı��εĳ��͸�(int)��";
	cin>>l>>h;
	parallelogram(l,h);
	
	
	return 0;
}