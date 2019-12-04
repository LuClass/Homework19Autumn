#include<iostream>
using namespace std;
char * cat(char *a,char *b){
	char *c=a;
while(*a)
a++;
for(;*a=*b;b++,a++);
return c;
}
int main (){
	char *a,*b;
	cin.getline(a,10);
	cin.getline(b,10);
	cout<<cat(a,b);
	return 0;
}
