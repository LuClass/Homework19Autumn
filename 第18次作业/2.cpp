#include<iostream>
#include<string.h>
using namespace std;
char * trim(char * s){
if (s == NULL) return NULL;
if (strlen(s) == 0) return s;
char *tail = s + strlen(s) - 1; 
while (*tail == ' ') tail--;
if(tail < s + strlen(s) - 1)
*(tail + 1) = '\0';
char * head = s; 
while (*head == ' ') head++;
char *h = s; 
if(head > h)
while (*h++= *head++);
return s;
}
int main(){
   char s[20];
   cin.getline(s,20);
   char *s1=trim(s);
   while(*s1!=0) 
   if(*s1!=' ')
   cout<<*s1++;
   else s1++;
   return 0;
}
