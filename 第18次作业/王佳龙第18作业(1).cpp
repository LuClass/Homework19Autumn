#include <iostream>
using namespace std;
void catwithoutstring( char *a, char *b){
    for(;*a;a++);
		while(*b){
			*a=*b;
			a++;
			b++;
		}
		*a=0;
}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100);
	catwithoutstring(a,b);	
    cout<<a;
}
