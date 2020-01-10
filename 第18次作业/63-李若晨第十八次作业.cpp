1.
using namespace std;
#include <iostream>
}
int scat(char *a,char *b)
{
	if(a == NULL ||b == NULL)
	return -1;
	char *p1 = a,*p2 = b;
	while(*p1)p1++;
	while(*p1++ = *p2++);
	return 0;
}
int main()
{
	char a[10],b[10];
	int n=sizeof(a);
	cin.getline(a,10);
	cin.getline(b,10);
	scat(a,b);
	cout<<a;
	return 0;	
}
2.
using namespace std;
#include <iostream>
#include <string.h>
int f(char a[])
{
	char b[100]={'\0'},c[2];
	for (int i=0;a[i];i++)
	{
		if (a[i]!=' ')
		{
			c[0]=a[i];
			strcat(b,c);
		}
	}
	strcpy(a,b);
}
int main()
{
	char a[100];
	cin.getline(a,100);
	f(a);
	cout<<a;
}
