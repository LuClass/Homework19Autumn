#include<iostream>
using namespace std;
int main()
{
	char a[50],b[50];
	cin.getline(a,50);
	for(int i=0;a[i];i++)
	{
		if(a[i]>='A'&&a[i]<='Z') b[i]=a[i]-'A'+'a';
		else b[i]=a[i];
	 } 
	 cout<<"before "<<a<<endl;
	 cout<<"after  "<<b<<endl;
	return 0;
 } 
