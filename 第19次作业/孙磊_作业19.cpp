#include<iostream>
using namespace std;
int getRev(char *a);
int getWordCount(char *a);

int getRev(char *a){
	char*a1 = a;
	int count = 0;
	while(*a1){
		char*a2=a1+1;
		while(*a2){
			if(*a1>*a2) count++;
			a2++;
		}
		a1++;
	}
	return count;
}

int getWordCount(char *a){
	char *a1 = a;
	int count;
	if(*a==' ') 
		count=0;
	else 
		count =1;
	while(*a1){
		char *a2 = a1+1;
		if(*a1==' '&&*a2!=' '&&*a2!=0)
			count++;
		a1++;
		a2++;
	}
	return count;
}

int main()
{
	//(6)ÄæĞòÊı 
	char a[] = "EAABEC";
	cout<<getRev(a)<<endl;
	//(8)µ¥´ÊÊı 
	char b[] = "  I am    Iron   MAN    ";
	cout<<getWordCount(b)<<endl;
}
