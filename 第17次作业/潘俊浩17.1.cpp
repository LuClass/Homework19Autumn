#include <iostream>
using namespace std;
void change(char *p){
	while(*p!=0){
		if(*p>='A'&&*p<='Z'){
			*p=*p+32;
		}
		p++;
    }
}
int main (){
	char a[21];
	cin.getline(a,21);
	change(a);
	cout<<a;
}
