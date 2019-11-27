#include<iostream>
using namespace std;
int f(int x,int a=0)
{
	if(x>0)
	{
	a*=10;
	a+=x%10;
	f(x/10,a);
	}
	else
	return a;
}
int main(void)
{
	int x;
	cin>>x;
	cout<<f(x);
	return 0;
} 
