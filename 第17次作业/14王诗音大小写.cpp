#include<iostream>
using namespace std;
void f(char *s){
	while(*s){
		if(*s>='A'&&*s<='Z')
		*s=*s-'A'+'a';
		s++;
	}
}
int main(){
	char *s,s1[20];
	cin.getline(s1,20);
	s=s1;
	f(s);
	cout<<s;
}
