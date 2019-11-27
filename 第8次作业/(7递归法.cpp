#include<iostream>
using namespace std;
void  f1(int x)
{
	int t;
	t=x%10;
	cout<<t;
}
void f2(int y)
{
	while(y)
	{
		f1(y);
		y=y/10;
	}
}
int main()
{
	int a;
	cout<<"请输入一个数：";
	cin>>a;
	f2(a);
	
}
