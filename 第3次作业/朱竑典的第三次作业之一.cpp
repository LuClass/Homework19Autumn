#include <iostream>
using namespace std;
int main ()
{
	int x;
	int a=7,b;
	unsigned int i=128; 
	cin>>x;
	while(a>=0)
	{
		b=x&i;
		cout<<(b>>a--)<<" ";
		i>>1;
	}
	return 0;
 } 
