#include<iostream>
using namespace std;
int main(void)
{
	int a=3,b=2;
	cout<<"1/2"<<endl<<"3/2"<<endl;
	for (int x=3;x<=20;x++)
	{
		a=a+b;
		b=a-b;
		cout<<a<<"/"<<b<<endl;
	}
	return 0;
}