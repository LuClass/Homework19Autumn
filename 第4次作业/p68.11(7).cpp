#include<iostream>
using namespace std;
int main(void)
{
	cout<<"1/2"<<'\n';
	int a=3,b=2,c=2,n=3;
	cout<<a<<'/'<<b<<'\n';
	while(n<21)
	{
		b=a,a+=c,c=b,n++;
		cout<<a<<'/'<<b<<'\n';
    }
	return 0;
} 

