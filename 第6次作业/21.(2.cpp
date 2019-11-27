#include<iostream>
using namespace std;
int Z(int x)
{
	int s=1;
	for(;x>0;x--)
	{
		s=s*x;
	}
	return s;
}
int C(int n,int k)
{
	int c;
	c=Z(n)/(Z(k)*Z(n-k));
	return c;
}
int main()
{
	int n,k;
	cout<<"ÇëÊäÈën,kµÄÖµ£º";
	while(cin>>n>>k)
	{
	   cout<<C(n,k)<<endl;
    }
	return 0;
}
