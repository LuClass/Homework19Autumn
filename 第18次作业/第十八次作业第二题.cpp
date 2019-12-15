#include <iostream>
#include <string.h>
using namespace std;
char * trim (char * s){
	if (s==NULL) return NULL;
	if (strlen(s)==0) return s;
	char *tail=s+strlen(s)-1;
	while (*tail==' ') tail--;
	if (tail<s+strlen(s)-1)
		*(tail+1)='\0';
	char *head=s;
	while (*head==' ') head++;
	char *h=s;
	if (head>h)
		while (*h++=*head++);
	char *m=s;
	for (int i=0;*(s+i);i++)
		if (*(m+i)==' ')
			for (int j=i;*(m+j);j++)
				*(m+j)=*(m+j+1);
	return s;
}

int main (){
	char s[]="  ab c  ";
	cout<<strlen(s);
	char*s1=trim(s);
	cout<<":"<<s1<<":"<<strlen(s1)<<endl;
	return 0;
}
 
