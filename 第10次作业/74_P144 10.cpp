#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int result=0;
	for (int i=2; i<=n; i++)
	{
		result=(result+m)%i;
	}
	cout<<"the last number is :"<<result+1<<endl;
	return 0;
}
