#include<iostream>
using namespace std;
int main(void)
{
	int x=0,n=1;
	cin>>x;
	while(n<=x)
	{
		if(x%n==0)
		cout<<n<<',';
		n++;
	}
	return 0;
} 
