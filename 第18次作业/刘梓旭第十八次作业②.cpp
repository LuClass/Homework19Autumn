#include<string.h>
#include<iostream>
using namespace std;
char*trim(char *s)
 {
  for(int i=0;i<strlen(s)&&*(s+i)!=0;i++)
   {if(*(s+i)==' ')
   for(int j=i;j<strlen(s);j++)
     *(s+j)=*(s+j+1);
   }
   return s;
 }
 int main()
 {char a[50];
 cin.getline(a,50);
 cout<<"before:"<<strlen(a)<<endl;
 cout<<trim(a)<<" after:"<<strlen(trim(a));
 
 return 0;
 }
