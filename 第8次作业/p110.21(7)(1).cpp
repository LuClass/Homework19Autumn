#include<iostream>
using namespace std;
int main(void)
{
	int x,a=0;
	cin>>x;
	while(x>0)
	{
		a*=10;
		a+=x%10;
		x/=10;
	}
	cout<<a;
	return 0;
} 
