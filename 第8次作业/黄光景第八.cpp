using namespace std;
#include<iostream>
int gys(int a,int b)
{
		for(int i=a>b?b:a;i>=1;i--)
	{		if(a%i==0&&b%i==0)
  	{cout<<a<<","<<b<<"的最大公约数是"<<i<<endl;
			 break;}
	}
	return 0;}
	int gbs(int a,int b)
	{	for(int i=a>b?a:b;i<=a*b;i++)
		{		if(i%a==0&&i%b==0)	
			{cout<<a<<","<<b<<"的最大公倍数是"<<i<<endl;
					 break;}
	}	
	return 0;}
	
	int main()
	{	int a,b;
		cin>>a>>b;
     	gys(a,b);
		gbs(a,b);
			return 0;}
			

using namespace std;
#include <iostream>
int f(int b)
{	if(b!=0)
	cout<<b%10;
		else	return 0;
	return f(b/10);}
	int main()
{	int a;
	cin>>a;	
	cout<<"递归的结果为";
	f(a);	
	cout<<endl;
	cout<<"递推的结果为";
	for(;a!=0;a/=10)
	{		cout<<a%10;	}
		return 0;
}