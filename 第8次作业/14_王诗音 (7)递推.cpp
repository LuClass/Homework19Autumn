#include<iostream>
using namespace std;
int main()
{
	int m=0,n;
	cin>>n;
	while(n)
	{
		m=m*10+n%10;
		n=n/10;
	}
	cout<<m;
	return 0;
 } 

