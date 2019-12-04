#include <iostream>
#include <string.h>
using namespace std;
char * trim(char *a){
for(char *s=a;*s;s++){
	if(*s==' '){
	for(char *p=s;*p;p++){
		*p=*(p+1);
	}	
	s--;
	}
	
}
return a;}
int main (){
	char *a;
	cin.getline(a,20);
	trim(a);
	cout<<a;
}
