#include<iostream>
using namespace std;
int main()
{
	int l,h,i,j,k;
	cout<<"input the base length and height of the parallelogram:\n";
	cin>>l>>h;
	for(i=0;i<h;i++)
	{
		for(j=0;j<i;j++)
			cout<<" ";
		for(k=0;k<l;k++)
			cout<<"*";
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h-1-i;j++)
			cout<<" ";
		for(k=0;k<l;k++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}
