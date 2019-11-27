using namespace std;
#include <iostream>
int main()
{
	int m,n;
	cout<<"输入一个整数"<<endl;
	cin>>m;
	cout<<"m=";
	for(n=2;n<=m;n++)
	{
		while(n!=1)
		{
			if(m%n==0)
			{
				cout<<n<<"*";
				m=m/n;
			}
			else
			  break;
		}
	}
	return 0;
}