#include<iostream>
using namespace std;
int change(char a[])
{
	int i;
	for(i=0;a[i];i++)
	{
	  cout<<a[i];
	  if(a[i]>='A'&&a[i]<='Z')
  	  a[i]=a[i]+32;
	}
	cout<<endl;
	for(i=0;a[i];i++)
	cout<<a[i];
}

int main()
{
	char a[50];
	cin.getline(a,50);
	change(a);
	return 0;
}







