using namespace std;
#include <iostream>
void factor(int n)
{
	int a;
	while(n!=1)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				a=i;
				break;
			}
		}
		cout<<a<<" ";
		n=n/a;
	}
}
int main()
{
	int x;
	cin>>x;
	factor(x);
	return 0;
}

