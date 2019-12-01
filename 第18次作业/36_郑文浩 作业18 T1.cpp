#include<iostream>
using namespace std;
char* Connect(char*,char*,char*);
int main(){
	char a[20];
	char b[20];
	cin.getline(a,20);
	cin.getline(b,20);
	char s[39];
	cout << Connect(s,a,b);
}
char* Connect(char *s,char *s1,char *s2){
	if(s1==NULL || s2==NULL)
	return NULL;
	else {
	int i=0,j=0;
	for(i=0;s1[i];i++){
		s[i]=s1[i];
	}
	for(int j=0;s2[j];j++){
		s[i+j]=s2[j];
	}
    }
	return s;
}
