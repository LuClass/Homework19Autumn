#include<iostream>
using namespace std;
int main()
{
	int n,t;
	bool x=1;
	cin>>n;
	t=1;
	while(n/t>9)
	{
		t*=10;
	}
	for(int i=1;;)
	{
		if(n/(t/i)%10!=n/i%10)
		{
			x=0;
			break;
		}
		if(i>=(t/i)) break;
		i*=10;
	}
	if(x) cout<<"yes";
	else cout<<"no";
	return 0;
 } 
