#include<iostream>
#include<string.h>
using namespace std;

int getWordCount(string a){
	int count=1;
	for(int i=0;i<(a.length()-1);i++){
		if((a[i]==' '||a[i]=='\t')&&a[i+1]!=' '&&a[i+1]!='\t')
		count++;
	}
	return count;
}
int main(){
	
	string a;
	while(getline(cin,a)) 
	{
		cout<<"字符串中单词的个数为："<<getWordCount(a)<<endl; 
	}
}
