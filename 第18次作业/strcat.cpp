#include <iostream>
using namespace std;
const int n=100;
char strcat(char*a,char*b){
	if (a==NULL||b==NULL) return 0;
	while(*a) a++;
	while (*b) *a++=*b++;*a=0;}
int main (){
	char a[]=" ";char b[]="efgh";
	strcat(a,b);cout<<a;
}
