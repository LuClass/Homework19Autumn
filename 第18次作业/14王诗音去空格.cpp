#include<iostream>
#include<string.h>
using namespace std;
char * trim(char * s){
	if(s==NULL) return NULL;
	if(strlen(s)==0) return s;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==' '){
			int j=1;
			for(;;j++){
				if(s[i+j]!=' ') break;
				if(s[i+j]='\0') break;
			}
			int k=i;
			while(s[k++]=s[j+k-1]);
		};
	}
	return s;
}

int main(){
	char s[20];
	cin.getline(s,20);
	cout<<strlen(s)<<endl;
	char * s1=trim(s);
	cout<<s1<<endl<<strlen(s1)<<endl;
	return 0;
}
