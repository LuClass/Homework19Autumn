#include<iostream>
#include<string.h>
using namespace std;
/*
 *黄海浪 9181040G0818
 *2019.11.29
 *第 18 次作业
 */
char * strCat(char *str1,char *str2) {
	if(str1==NULL||str2==NULL) return NULL;
	unsigned long len1=0,len2=0;
	while(*str1++) ++len1;
	while(*str2++) ++len2;
	str1 -= len1+1;
	str2 -= len2+1;
	char *add = new char [len1+len2+1],*des = add;
	while(*add++=*str1++);
	--add;
	while(*add++=*str2++);
	return des;
}
char * trim(char *str) {
	if(str==NULL) return NULL;
	unsigned long len = 0;
	while(*str++) ++len;
	str -= len+1;
	char *tmp = new char [len+1],*des = tmp;
	while(*str) {
		if(*str!=' ') *tmp++ = *str;
		++str;
	}
	*tmp = '\0';
	return des;
}
int main() {
	{
		//T1
		char t1[] = "qwe  qw",t2[] = "asf  12d";
		char *tmp = strCat(t1,t2);
		cout<<tmp<<endl;
	}
	{
		//T2
		char str[] = "   1  asd 213  ";
		cout<<trim(str);
	}
	return 0 ;
}
