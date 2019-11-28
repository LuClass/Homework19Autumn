#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<i+1;j++)
		{
			cout<<j<<'*'<<i<<'='<<setw(2)<<j*i<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
