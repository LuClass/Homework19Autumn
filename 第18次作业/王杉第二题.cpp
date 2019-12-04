#include <iostream>
using namespace std;
void STRCAT(char *a1,char *b1)
{
	while (*a1!=0)
	{
		cout<<*a1++;
		if(*a1==0)
		{
			a1=b1;
			cout<<a1;
			break;
		}
	}
}
int  main()
{
	char a[100],b[100], *a1=&a[0],*b1=&b[0];
	cin.getline(a,100);
	cin.getline(b,100);
	STRCAT(a1,b1);
}
