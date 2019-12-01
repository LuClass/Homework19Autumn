#include <iostream>
#include <string.h>
using namespace std;

char *trim(char *s)
{
	if(s==NULL)
	   return NULL;
	if(strlen(s)==0)
	   return s;
	char *c;
	while(*s!=' ')
	{
		if(*s=='\0')
		{
			return 0;
		}
		s++;
	}
	c=s+1;
	while(*c==' ')
	{
		c++;
	}
	while(*c!='\0')
	{
		if(*c!=' ')
		{
			*s=*c;
			*c=' ';
			s++;
		}
		c++;
	}
	*s='\0';
	return 0;	    
}

int main()
{
	char s[100];
	char *c;
	cin.getline(s,100);
	trim(s);
	cout<<s;
}
