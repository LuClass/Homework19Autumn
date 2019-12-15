#include<iostream>
#include<string.h>
using namespace std;
int qiu(char *s){
	int m=strlen(s);
	for(int i=0;i<m;i++){
		if('A'<=*s<='Z'){
			*s+=32;
			cout<<*s;
			s++;
		}
	}
	return 0;
}
int main(){
	char s[10];
	cin.getline(s,10);
	qiu(s);
	return 0;
}
