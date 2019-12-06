#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int getWordCount(char a[]);
	char x[50];
	cin.getline(x,50);
	getWordCount(x);
}
int getWordCount(char a[]){
	int count=0;
	char *b=a;
	while(*b){
		while(*b++==' '||*b++=='\t');
		while((*b++!=' '&&*b++!='\t')&&*b);
	count++;
}
	cout<<count;
}
