using namespace std;
#include <iostream>
bool wanquanshu(int n)
{
	int i,m;
	m=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0) m+=i;
	}
	if(m==n) return true;
	return false;
}
int main()
{
	int i,j;
	cin>>i>>j;
	int a;
	for(a=i;a<=j;a++)
	{
		if(wanquanshu(a))
		cout<<a<<" ";
	}
	return 0;
 } 
