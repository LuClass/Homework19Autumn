#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char *a){
	int m=strlen(a),j=0,i=0;
		while(*a==' '){
			a++; 
			i++;
		}
		for(;i<m;i++){
			if(*a!=' '){
				j++;
				while(*a!=' '&&i<m){
					a++;
					i++;
				}i--;
			}
			else{a++;
			}
		}
		
	
	return j;
}
int main(){
	char a[100];
	gets(a);
	int q=getWordCount(a);
	cout<<q;
}
