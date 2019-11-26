using namespace std;
#include <iostream>
void opposite(int n)
{
	if(n%10==n)
	{
		cout<<n;
	}
	else
	{
		cout<<n%10;
		opposite(n/10);
	}
}
int main()
{
	int n;
	cin>>n;
	opposite(n);
	return 0;
}
