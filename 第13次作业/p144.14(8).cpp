#include <iostream>
#include <string.h>
#define MAX 5
using namespace std;
int main(){
	int getWordCount(char a[]);
	char x[50];
	cin.getline(x,50);
	getWordCount(x);
}
int getWordCount(char a[]){
	int count=0,n,i=0;
	char ch1[1],ch2[1];
	n=strlen(a);
	while(i<=n-1){
		if(a[i]!=' ')
			i++;
		if(a[i]==' '&&i==0){
			while(a[i+1]==' ')
				i++;
			i++;
		}
		if((a[i]==' '&&((i)!=n-1))){
			count++;
			while(a[i+1]!=' ')
				i++;
			i++;
		}
	}
	if(count!=1){
		count++;
	}
	cout<<count;
}
