using namespace std;
#include <iostream>
char *strcat(char *a,const char *b){
	while(*++a!='\0'); while((*a++=*b++)!='\0');
	return a;
}
main(){
	char a[50]="1ad31";
	char b[9]="132145";
	strcat(a,b);
	cout<<a<<endl;
	return 0;
}
