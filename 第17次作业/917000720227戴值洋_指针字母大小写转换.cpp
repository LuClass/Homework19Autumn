#include <iostream>
using namespace std;

void converse(char *p) 
{
	for(;*p!='\0';p++)
	{
		if(*p>='A'&&*p<='Z')
		*p='a'-'A'+*p;
	}
}

int main()
{
	char s[20];
	cin.getline(s,20);
	converse(s);
	cout<<s;
	return 0;
}

