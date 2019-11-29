#include<iostream>
#include<string.h>
using namespace std;
int qiu(char *s){
	char *k=s;
		for(int a=0;a<20;a++){
			if(*s!=' '){
				*k++=*s++;
			}
			else{
				s++;
			}
		} return *s;
}
int main(){
	char s[20];
	gets(s);
	qiu(s);
	cout<<s;;
	return 0;
}
