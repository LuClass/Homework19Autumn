#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<'*'<<'*'<<'\n';
	for(i=1;i<11;i++)
	{
		for(j=1;j<=i;j++)
		cout<<'\3'<<'\3';
		cout<<endl;
	}
	return 0;
}
