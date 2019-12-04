using namespace std;
#include <iostream>
#include <iomanip>
int main()
{
	int a,b,i,c;
	a=1;
	b=2;
	cout<<a<<"/"<<b<<" 分子:"<<a<<" 分母:"<<b<<endl;
	a=a+b;
	cout<<a<<"/"<<b<<" 分子:"<<a<<" 分母:"<<b<<endl;//a=3,b=2
	for(i=1;i<=17;i++)
	{
		c=a+b;
		b=a;
		a=c;
		cout<<a<<"/"<<b<<" 分子:"<<a<<" 分母:"<<b<<endl;
	}
	return 0;
}
