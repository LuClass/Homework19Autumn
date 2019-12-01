#include <iostream>
using namespace std;

void Strcat(char *a,char *b)
{
	char *str1=a;
	char *str2=b;
	while(*str1)
	{
		str1++;
	}
	while(*str2)
	{
		*str1=*str2;
		str2++;
		str1++;
	}
	*str1=*str2;
	cout<<a;
}

int main()
{
	char a[]="week";
	char b[]="day";
	Strcat(a,b);
}

