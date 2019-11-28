using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>
char H(char *q){
	for(;*q!='\0';q++)
	   if(*q>='A'&&*q<='Z')
	       *q=*q+32;	
}
main(){
	char a[100];
	gets(a);
	char *q=a; 
	H(q);
	cout<<a;
    for(;*q!='\0';q++) cout<<*q;
	return 0;
}
//作业：1 设计一个函数，形参为任意一个字符串，将其中的大写字母转换成小写字母。要求：形参用指针，函数里用指针进行处理。
