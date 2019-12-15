/*
(8)编写一个函数： int getWordCount(char a[])，统计字符串 a 中的单词个数，单词之间用一
个或多个空格或 tab 符隔开。
*/
#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char *a){
	int num=0;
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(((*(a+i)>='a'&&*(a+i)<='z')||(*(a+i)>='A'&&*(a+i)<='Z'))&&(*(a+i+1)==' '||*(a+i+1)=='\0')){
			num++;
		}
	}
	return num;
}
int main(){
	char a[1010]={"\tEveryone has that period in which they  find those who are close to them start to seem annoying"};
	cout<<"字符串为："<<endl<<a<<endl;
	cout<<"字符串字数为："<<endl<<getWordCount((char *)a)<<endl;
}
