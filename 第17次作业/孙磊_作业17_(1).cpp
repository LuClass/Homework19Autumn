#include<iostream>
#include<string.h>
using namespace std;


void toLower(const char *str1){
	const int m = strlen(str1);
	char str2[m];
	for(int i=0;i<m; i++){
		str2[i]=str1[i];
		if(str1[i]>='A'&&str1[i]<='Z'){
			str2[i]+=32;
		}
	}
	cout<<str2;
}
int main(){
	const char *str = "ABCQWERTYUdefWERTYzzz";
	toLower(str);
	
	return 0;
} 
