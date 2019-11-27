#include <iostream>
using namespace std;
int main()
{
    cout<<"水仙花数有:";
	cout<<"\n" ;
	int n,r,s,t;
	for(n=100;n>=100&&n<=999;n++)
	{
	r=n/100;
	s=(n/10)%10;
	t=n%10;
	if(r*r*r+s*s*s+t*t*t==n)
	cout<<n<<endl;
	}
	return 0;
}
