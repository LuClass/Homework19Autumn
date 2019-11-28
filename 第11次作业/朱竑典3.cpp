#include <iostream>
using namespace std;
int main()
{
	int i,j,n,a,x;
	cin>>i>>j;
	n=i;
	while(n<=j)
	{
		for(a=1,x=0;a<n;a++)
		{
			if(n%a==0)
				x+=a;
		}
		if(n==x)
			cout<<n<<' ';
		n++;
	}
	return 0;
}
