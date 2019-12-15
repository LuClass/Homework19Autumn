using namespace std;
#include <iostream>
#include <string.h>
int getWordCount(char a[]){
	char *p=a;int count=0;
	for(;*p!='\0';p++)
	   if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z'))
	   count+=1;
	cout<<"单词的个数为："<<count<<endl;
}
main(){
	char a[50];
	gets(a); //利用这个东东，呵呵 
	getWordCount(a);
	return 0;
}
