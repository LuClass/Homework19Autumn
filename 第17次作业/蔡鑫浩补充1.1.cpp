#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char a[50];
	cin.getline(a,50);
	char *x=a;
	void change(char *x);
	change(a);
	cout<<a;
}
void change(char *x){
	for(;*x;x++){
		if(*x>='A'&&*x<='Z'){
			*x+=32;
		}
	}
}
