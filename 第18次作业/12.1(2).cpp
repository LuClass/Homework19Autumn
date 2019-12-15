using namespace std;

#include <iostream>
#include <string.h>
char *trim(char *s){
	char *a=s;
	char *b=s;
	a++;
    while(*s!='\0'){
	char *a=s;
	char *b=s;
	a++;
	if(*b==' ') while(*b++=*a++);
	s++;
	}
	return s;
}
main(){
	char s[20];
	cin.get(s,20);
	trim(s);
	cout<<s<<endl;
	return 0;
}
