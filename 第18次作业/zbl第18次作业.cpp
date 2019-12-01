1
#include <iostream>
 using namespace std;
 void strcat(char *p1,char *p2)
 {
 	char *x1=p1;
 	char *x2=p2;
 	while(*x1)
 	{ x1++;
 	}
 	while(*x2)
 	{ *x1=*x2;
 	   x2++;
 	   x1++;
 	}
 	*x1=*x2;
 	cout<<p1;
  } 
  int main()
  {
  	char p1[30];
  	char p2[30];
  	cin.getline(p1,30);
  	cin.getline(p2,30);
  	strcat(p1,p2);
  }
 2 
#include<iostream>
#include<string.h>
 using namespace std;

 char* trim(char* s)
 {
 	char temp;
 	int n=strlen(s);
 	for(int x=0;x<n&&*(s+x)!=0;x++)
 	{
 		while(*(s+x)==' ')
 		{
 			for(int y=x;y<n;y++)			
 				*(s+y)=*(s+y+1);			
 		}
 	}
 	return s;
 }

 int main(void)
 {
 	char s[40];
 	cin.getline(s,40);
 	cout<<endl<<strlen(s)<<endl;
 	char* s1=trim(s);
 	cout<<endl<<trim(s1)<<endl<<endl<<strlen(s1)<<endl;
 	return 0;
 }
