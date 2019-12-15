#include<iostream>
#include<string.h>
#define M 50
using namespace std;

int getWordCount(char *a){
	int count=1;
	for(int i=0;i<(strlen(a)-1);i++){
		if((*(a+i)==' '||*(a+i)=='\t')&&*(a+i+1)!=' '&&*(a+i+1)!='\t')
		count++;
	}
	return count;
}
int main(){
	
	char a[50];
	while(cin.getline(a,M)) 
	{
		cout<<"字符串中单词的个数为："<<getWordCount(a)<<endl; 
	}
}
