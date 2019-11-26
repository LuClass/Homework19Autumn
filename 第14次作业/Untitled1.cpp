#include <iostream>
using namespace std;
int main ()
{
	char a[50];
	int i;
	cin.getline(a,50);
	cout<<a;
	for(i=0;(a[i])!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		a[i]+=32;
	}
	cout<<a<<endl;
	return 0;
 } 
