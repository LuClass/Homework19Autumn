using namespace std;
#include <iostream>
int main()
{
	char a[50];
	cin.getline(a,50);
	int i;
	for(i=0;a[i];i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]+=32;
			cout<<a[i];
		}
		else cout<<a[i];
	 } 
	 return 0;
 } 
