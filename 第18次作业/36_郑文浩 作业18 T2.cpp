#include<iostream>
#include<cstring>
using namespace std;
char * trim(char *s){
	int len=strlen(s);
	char *s3;
	char *s4;
	char *tale=s+len-1;                // 定位到尾部字符
	char *head =s;
	while(*head==' ' && head++);
	char *h=s;
	if(head>h){
		while(*h++=*head++);
	}
	while(tale!=s){
	    while(*tale!=' '&&tale--&&tale!=s);
	    s3=tale+1;
	    while(*tale==' '&& tale--&&tale!=s);
	    s4=tale+1;
	    while(*s4++=*s3++);
    }
	
	return s;	
}
int main(){
	char s[20];
	cin.getline(s,20); 
	cout << strlen(s) << endl;
	char *s1=trim(s);
	cout << strlen(s1) << endl;
	cout << s1 << endl; 
} 
