#include <iostream>
using namespace std;
#include <math.h>
//仅限int类型范围 
int main()
{
	int n;
	cin>>n;
	int num=0,sum=0;
	int m1=n,m2=n;
	while(m1!=0)
	{
		num++;
		m1/=10;
	}
	while(m2!=0)
	{
		num--;
		sum+=m2%10*pow(10,num);
		m2/=10;
	}
	if(sum==n)
	cout<<sum<<"是一个回文数";
	else
	cout<<sum<<"不是一个回文数";
	return 0;
} 
