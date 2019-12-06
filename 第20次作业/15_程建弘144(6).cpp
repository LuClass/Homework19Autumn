/*
(6)先编写一个函数： int getRev(char a[])， 计算并返回字符串 a 的逆序。
逆序的概念：在一个字符串中， 如果存在 i<j，且 a[i]>a[j]，则称 a[i]和 a[j]构成 1 个逆序。
例如"DAABEC"的逆序是 5，其中 D 与 A、 A、 B、 C 构成 4 个逆序， E 与 C 构成 1 个逆序。
要求任意输入 MAX 个字符串(MAX 是一个宏，值为>2 的正整数)，每个串不多于 20 个字符，
先计算各串的逆序数，再按逆序数升序输出各串及其逆序数
*/
/*测试数据
4
DAABEC
ABBBCDDD
BDCBDCCA
BCCDEEA 
*/ 
#include<iostream>
#include<string.h>
using namespace std;
struct Row{
	int num;
	char *str;
};
int getRev(char a[]){
	int len=strlen(a);
	int num=0;
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(a[i]>a[j]){
				num++;
			}
		}
	}
	return num;
}
int main(){
	cout<<"输入字符串数是：";
	int MAX;cin>>MAX;
	Row*table =new Row[MAX];
	cout<<"请输入要计算的字符串"<<endl;
	for(int i=0;i<MAX;i++){
		table[i].str=new char[20];	
		cin>>table[i].str;
		table[i].num=getRev(table[i].str);
	}
	for(int i=0;i<MAX-1;i++){
		for(int j=i;j<MAX;j++){
			if(table[i].num>table[j].num){
				int temp=table[i].num;
				table[i].num=table[j].num;
				table[j].num=temp;
				char s[20];
				strcpy(s,table[i].str);
				strcpy(table[i].str,table[j].str);
				strcpy(table[j].str,s);
			}
		}
	}
	for(int i=0;i<MAX;i++){
		cout<<"逆序数: "<<table[i].num<<" 字符串：" <<table[i].str<<endl;
	}
	for(int i=0;i<MAX;i++){
		delete []table[i].str;
	}
	delete []table;
} 
 
