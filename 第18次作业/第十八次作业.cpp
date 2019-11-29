#include <iostream>
using namespace std;
int main ()
{
	char s1[20],s2[20],*p,*a;
	p=s1;a=s2;
	cin.getline(s1,20);
	cin.getline(s2,20);
	cout<<p<<a;
	return 0;
}

#include <iostream>
#include <string.h>
using namespace std;
char *trim(char *s)
{
	int i=0,j=0;
	char *a=s;
	if(s==NULL) return NULL;
	if(strlen(s)==0) return s;
	char *tail=s+strlen(s)-1;
	while(*tail==' ')
	tail--;
	if(tail<s+strlen(s)-1)
	*(tail+1)='\0';
	char *head=s;
	while(*head==' ')head++;
	char *h=s;
	if(head>h)
	while(*h++=*head++);
    for(;*(s+i)!=0;i++)
     {
	 if(*(s+i)!=' ')
	 a[j++]=s[i];
     }
     a[j]='\0';
     s=a;
	 return s;
}
int main ()
{
	char s[100];
	cin.getline(s,100);
	char *s1=trim(s);
	cout<<s1<<endl;
	return 0;
}
