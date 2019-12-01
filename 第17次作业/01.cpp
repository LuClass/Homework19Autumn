#include<iostream>
using namespace std;
#include<string.h>
char dd(char *q)
{ for(;*q!='\0';q++)
   if(*q>='A' &&*q<='Z')
     *q=*q+32;
}

int main()
{
	char a[100];
	cin.getline(a,100);
	char *q=a;
	dd(q);
	 for(;*q!='\0';q++)
	 cout<<*q;
}
