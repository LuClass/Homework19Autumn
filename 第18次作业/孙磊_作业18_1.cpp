#include<iostream>
using namespace std;

void strcat(char *s1, char *s2){
		while(*s1!=0) s1++;	//指针指到最后位 
		while(*s2!=0)	
		*s1++=*s2++;	
		*s1=0;	
} 

int main(){
	char a1[] = "sun";
	char a2[] = "lei";
	strcat(a1, a2);
	cout<<a1<<endl;
}
