using namespace std;
#include <iostream>
int func(int n)
{
	int l,m=0;
	while(n/10!=0)
	{
		l=n%10;
		n=n/10;
		m=m*10+l;
	 }
	 if(n!=0)
	 m=m*10+n;
	 return m;
}
int main()
{
	int m,n;
	int func(int n);
	cin>>n;
	m=func(n);
	cout<<m;
	return 0;
}