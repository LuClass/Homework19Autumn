/*
2.参考教材的8.16例题，去除一个字符串中的所有空格，如 ab c 1 2 3 ，最终变为abc123，trim函数原型与8.16一致。 
*/
#include<iostream>
#include<string.h>
using namespace std;
char*trim(char*s){
	if(s==NULL)return NULL;
	if(strlen(s)==0)return s;
	int num=0;
	char*another;
	for(int i=0;i<strlen(s);i++){
		if(*(s+i)!=' '){
			*(another+num++)=*(s+i);
		}
	}
	another[num]='\0';
	return another;
}
int main(){
	char s[]=" ab c 1 2 3 ";
	cout<<"原串\t\t"<<s<<endl;
	char*s1=trim(s);
	cout<<"处理后串\t"<<s1<<endl;
	return 0;
} 
/*另法 
char*trim(char*s){
	if(s==NULL)return NULL;
	if(strlen(s)==0)return s;
	int num=0;
	char a[100];
	char*another=a;
	for(int i=0;i<strlen(s);i++){
		if(*(s+i)!=' '){
			*another++=*(s+i);
			num++;
		}
	}
	*another=0;
	another=another-num;
	return another;
}
*/
