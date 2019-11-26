#include<iostream>
using namespace std;
int f(int n)
{
	int x=3,a=0;
	while(x<n)
	{
		if(n%x==0)
	a+=x,x+=2;
	}
	if(a==0)
	return 1;
	else
	return 0;
} 
int main()
{
	for(int n=3;n<=3;n+=2)
	if(f(n)&&f(n+2))
	cout<<n<<n+2<<'\n';
}
