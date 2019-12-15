#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char x[50];
	cin.getline(x,50);
	char *b=x;
	char * trim(char * p);
	trim(b);
	cout<<b;
}
char * trim(char * p){
char *q=NULL;
 while(*p!=0)
 {
  if(*p!=' ')
   p++;
  else
  {
   q=p;
   while(*q!=0)
   {
    *q=*(q+1);
    q++;
   }
  }
 }
	return p;
}


