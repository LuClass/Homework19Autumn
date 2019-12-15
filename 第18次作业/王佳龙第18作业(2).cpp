#include <iostream>
using namespace std;
char * trim(char *s)
{
	char b[50],*b1=&b[0];
	while (*s!=0){
	if (*s!=' '){
	*b1=*s;
	*b1++;
}
	*s++;
}
	*b1=0;
	b1=&b[0];
	while (*b1!=0){
	cout<<*b1;
	*b1++;
}
}
int main(){
	char a[50];
	cin.getline(a,50);
	trim(a);
}
