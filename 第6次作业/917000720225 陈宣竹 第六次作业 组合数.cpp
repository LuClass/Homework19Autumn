int combine(int n,int k)
{
	int a=1,b=1,c=1,res;
	for(int i=1;i<=n;i++)
	{
		a=a*i;
	}
	for(int j=1;j<=k;j++)
	{
		b=b*j; 
	}
	for(int g=1;g<=(n-k);g++)
	{
		c=c*g;
	}
	res=a/(b*c);
	return res;
}
using namespace std;
#include <iostream>
int main()
{
	cout<<combine(4,2)<<endl;
	cout<<combine(6,4)<<endl;
	cout<<combine(8,7);
	return 0;
}
