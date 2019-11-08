#include<iostream>
using namespace std;
int main()
{
	int i,j,k,m,n,a,b;
	cout<<"输入两个三位数且小的在前"; 
	cin>>i>>j;
	cout<<"“水仙花数”有："; 
	for(;i<=j;i++)
	{
	a=i%10;
	b=(i/10)%10;
	k=i/100;
	if(a*a*a+b*b*b+k*k*k==i)
	cout<<i<<" ";
	}
}
