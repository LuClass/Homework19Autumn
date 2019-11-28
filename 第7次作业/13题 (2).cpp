#include<iostream>
using namespace std;
int main()
{
	int n,i,k,m;
	for(n=100;n<=999;n++)
	{
		i=n/100;
		k=n/10%10;
		m=n%10;
	if(n==i*i*i+k*k*k+m*m*m)
			cout<<n<<endl;
	
	
    }
return 0;
}
