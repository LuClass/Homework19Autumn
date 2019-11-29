/*
1 设计一个函数，形参为任意一个字符串，将其中的大写字母转换成小写字母。
要求：形参用指针，函数里用指针进行处理。
*/ 
#include<iostream>
using namespace std;
void Toarr(char*s){
	int i=0;
	while(*s){
		if(*s>='A'&&*s<='Z'){
			*s+=32;
		}
		s++;
	}
}
int main(){
	char s[]={"asfSDAdsDVS"};
	char*p=s;
	Toarr(p);
	cout<<"结果为："<<endl<<s<<endl; 
} 

