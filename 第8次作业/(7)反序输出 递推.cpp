using namespace std;
#include <iostream>
void opposite(int n)
{
	while(n!=0)
	{
		cout<<n%10;
		n=n/10;
	}
} 
int main()
{
	int n;
	cin>>n;
	opposite(n);
	return 0;
}
