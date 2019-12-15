#include <iostream>
using namespace std;

char *trim(char *s)
{
	static char s1[50];
	int i=0;
	while(*s!='\0')
	{
		if(*s!=' ')
		{
			s1[i]=*s;
			i++;
		}
		s++;
	}
	s=s1;
	return s;
}

int main()
{
	char s[50];
	cin.getline(s,50);
	char *p=trim(s);
	cout<<p;
	return 0;
}

