//(8) 
#include<iostream>
#include<string.h>
using namespace std;

int getWordCount(char a[]){
	int count=1;
	for(int i=0;i<strlen(a)-1;i++){
		if((a[i]==' '||a[i]=='\t')&&a[i+1]!=' '&&a[i+1]!='\t')
		count++;		//该字符为空格或tab并且下个字符不为空格或tab
	}
	return count;
}

//测试 
int main(){
	char a[]="Sunday's coming I   WANNA 	drive my car";
	cout<<getWordCount(a);	//输出为 7 
}
