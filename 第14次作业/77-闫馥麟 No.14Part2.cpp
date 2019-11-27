#include<iostream>
# define max 51
using namespace std;
int main()
{
	char a[max];int length=0,index=0;
	cin.getline(a,max);
	while (a[index])
	{
		length++;
		index++;
	}
	for (int i=0;i<=length;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	for (int k=0;k<=length;k++)
	{
		if (int (a[k])>=65&&int (a[k])<=90)
		cout<<char (int (a[k])+32);
		else
		cout<<a[k];
	}
	return 0;
}