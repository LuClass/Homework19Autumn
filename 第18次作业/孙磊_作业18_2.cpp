#include<iostream>
#include<string.h>
using namespace std;
char * trim(char * s) {
	if (s == NULL) return NULL;
	if (strlen(s) == 0) return s;
	char *s1 = new char; //声明新字符串 
	int j=0;
	for(int i=0;s[i]!=0;i++){	//遍历原字符串 
		if(s[i]!=' '){
			s1[j]=s[i];		//不是空格的移到新字符串 
			j++;
		}
	}
	s1[j]='\0';		//尾零 
	return s1;
}


int main() {
	char s[] = "   sun Lei ZUO ye 18    !";
	cout<<strlen(s);     //输出原串长
	char * s1 = trim(s);
	cout<<":"<<s1<<":"<<strlen(s1)<<endl; //输出处理之后的串及长度
	return 0;
}
