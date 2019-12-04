#include<iostream>
#include<string.h>
using namespace std;
char * trim(char *s)
{
	char *p,*q;
    for(p=s;*p!='\0';)
    {
    	q=p;
    	if(*q==' ')
    	{
    		while(*q!='\0')
    		{
    			*q=*(q+1);
    			q++;
			}
		}
		else
		{
			p++;
		}
	}
	return s;
}
int main()
{
	char s[]=" ab c 1 2 3";
	char *s1;
	s1=trim(s);
	cout<<s1;
	return 0;
}      
