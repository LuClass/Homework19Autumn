#include<iostream>
using namespace std;          
int qiu(char *s,char *a){
while(*s!='\0'){
	s++;
}

while(*a!='\0'){
	*s++=*a++;
}
	return *s;
}
int main(){
char s[10];
char a[10];
gets(s);
gets(a);
qiu(s,a);
cout<<s;
return 0;
}
