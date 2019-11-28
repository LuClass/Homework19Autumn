#include<iostream>
using namespace std;
int s(int x)//判断是否为素数 
{
	int i;
	for(i=2;i*i<=x;i++)
	{
		if(x%i==0)
		break;
	}
	if(i*i>x)
	return 1;//是素数 
	else
	return 0;//非素数 
}
int f1(int y)//各位数之和
{
	int s=0;
	while(y!=0)
	{
		s=s+y%10;
		y=y/10;
	}
	return s;
} 
int f2(int z)//质因数之和 
{
	int s=0;
	for(int i=2;i<=z;i++)
	{
		if(z%i==0&&z>1)
		{
			s=s+i;
			z=z/i;
			i--;
		}
	}
	return s;
}
bool isSmith(int n)//判断是否为史密斯数
{
	if(s(n)==1)
	return false;
	else
	{
		if(f1(n)==f2(n))
		return true;//是 
		else
		return false;
	}
}
int main()
{
	for(int i=4937774;;i++)
	{
		if(isSmith(i)==1)
		{
		   cout<<i<<endl;
		   break;
	    }
	}
	return 0;
} 
