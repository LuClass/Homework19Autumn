#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,t;
	cin>>n;
	a=n,b=0,c=1,t=1;
	while(a>0)
	{
		a/=10;
		b++;
		c*=10;
	}
	while(t<=b/2)
	{
		c/=10;
		if((n/c)!=(n%10))
		{
			cout<<"不是回文数";
			return 0;
		}
		n=n%(c*10)/10;
		t++;
	}
	cout<<"是回文数"; 
	return 0;
}
