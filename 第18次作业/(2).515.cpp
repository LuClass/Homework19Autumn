#include<iostream>
#include<string.h>
using namespace std;

char *trim(char *s)
{
	
	if(s==NULL) return NULL;
	if(strlen(s)==0) return s;
	
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n-1-i;j++)
	   {
			 if(*(s+j)==' ')
	     {*(s+j)=*(s+j+1);*(s+j+1)=' ';}
	   }
	}
	
	char *tail=s+strlen(s)-1;
	while(*tail==' ') tail--;
	if(tail<s+strlen(s)-1)
	*(tail+1)='\0';
	return s;
}

int main()
{
	char s[]=" ab c szxc bhmz a asljdnsajda         lasjn sljadn   ";	
	char *s1=trim(s);
	cout<<s1<<endl;
	return 0;
}

