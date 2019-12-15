#include <iostream>
using namespace std;

char* strcat(char *fr,char *be){ 
	if(fr==NULL||be==NULL)	
		return 0; 
	char* com=fr;
	while (*fr!='\0')
		fr++;
	while ((*fr=*be)!='\0'){
		fr++;
		be++;
	}
	return com;
} 
int main ( ){
	char s1[100]="C++";
	char s2[100]="aaa";	
	char* s3=strcat(s1,s2);
	cout<<s3<<endl;
	return 0;
}
