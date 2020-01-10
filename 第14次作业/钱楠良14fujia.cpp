using namespace std;
#include<iostream>
int main()
{
	char a[50],b[50];
	cin.getline(a,50);
	for(int i=0;i<50;i++)
	{
		if(a[i]==0)
		{
			break;
		}
		if(a[i]>=65&&a[i]<=90)
		b[i]=a[i]+32;
		else b[i]=a[i];
	}
	cout<<a<<endl;
	cout<<b;
	return 0;
}

