/*
(5)输入一个字符串，串内有数字和非数字字符，如：
abc2345 345rrf678 jfkld945
将其中连续的数字作为一个整数，依次存放到一个整型数组中。如对于以上的输入，将 2345 存放到 b[0]，
345 放入 b[1]， ...。统计出字符串中的整数个数，并输出这些整数。
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	cout<<"输入一个字符串："<<endl;
	char s[100];
	char p[100][100];
	char *pp[100];
	cin.getline(s,100);
	int num=0;
	
	for(int i=0;i<strlen(s);i++){
		int n=0;
		while(s[i]>='0'&&s[i]<='9'){		
			p[num][n++]=s[i];
			i++;
		}
		pp[num]=p[num];
		if(n){
			num++;
		}
	}
	cout<<"整数个数： "<<num<<endl;
	cout<<"这些数是： "<<endl;
	for(int i=0;i<num;i++){
		cout<<pp[i]<<endl;
	}
}
