using namespace std;
#include <iostream>
int main ()
{
	//求x的因子 
	int x;
	cout<<"请输入一个正整数："; 
	cin>>x;
	cout<<x<<"的因子为："<<endl; 
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		cout<<i<<endl;
	}
	//求100以内的完全数
	int sum; 
	cout<<"100以内的完全数为："<<endl; 
	for(int j=1;j<=100;j++)
	{
		sum=0;
		for(int k=1;k<j;k++)
		{
			if(j%k==0)
			{
				sum+=k;
			}
		}
		if(sum==j)
		{
			cout<<j<<endl;
		}
	}
	return 0;
}
