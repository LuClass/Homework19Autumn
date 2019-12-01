#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"请输入长和高："; 
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		int x;
		for(int j=a;j>0;j--)
		{
			cout<<"*";
		}
		cout<<'\n';
		for(x=i;x>0;x--)
		cout<<' ';
	
	}
	cout<<endl;
	for(;b>0;b--)
	{
		for(int i=b-1;i>0;i--)
		cout<<' ';
		for(int j=a;j>0;j--)
		cout<<"*";
		cout<<'\n'; 
	}
	return 0;
}
