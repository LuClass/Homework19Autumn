#include<iostream>
using namespace std;
int main(void)
{
	int x;
	cout<<"please input a number(int):"<<endl;
	cin>>x;
	for (int n=1;n<=x;n++)
	{
		if (x%n==0) cout<<n<<endl;
	}
	cout<<endl<<endl<<endl;
	
	cout<<"1~100之间的完全数有:"<<endl;
	int s=0;
	for (int a=1;a<=100;a++)
	{
		for (int b=1;b<a;b++)
		{
			if (a%b==0)
			{
				s=s+b;
			}
		}
		if (s==a) cout<<a<<endl;
		s=0;
	}
	
	return 0;
}