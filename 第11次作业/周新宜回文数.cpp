using namespace std;
#include<iostream>
int main()
{
	int n;
	int a=0,m;
	cin>>n;
	m=n;
	while(m>0)
	{
		a=a*10+m%10;
		m=m/10;
	}
	if(a==n)
	  cout<<"这是一个回文数";
	else
	  cout<<"这不是一个回文数";
	return 0; 
}
