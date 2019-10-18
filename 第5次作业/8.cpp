#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	for(int b=1;b<=9;b++)
	{
		for(int a=1;a<=b;a++)
		{
			cout<<a<<"*"<<b<<"="<<setw(2)<<a*b<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
