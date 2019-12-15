#include <iostream>
#include <string.h>
using namespace std;
#define MAX 3
int getRev(char *a){
	int sum=0;
	for(char *b=a;*b;b++){
		for(char *c=b;*c;c++){
			if(*b>*c)sum++;
		}
		
	}
	return sum;
}

int main (){
	char s[MAX][20];
	int p[MAX];
	for(int i=0;i<MAX;i++){
		cin.getline(s[i],20);
		p[i]=getRev(s[i]);
	}
	for(int i=0;i<MAX-1;i++){
		if(p[i]>p[i+1]){
		 int g=p[i+1];
		 p[i+1]=p[i];
		 p[i]=g;
		 char h[20];
		 strcpy(h,s[i+1]);
		 strcpy(s[i+1],s[i]);
		 strcpy(s[i],h);
		}
	}
	for(int i=0;i<MAX;i++){
		cout<<p[i]<<' '<<s[i]<<endl;
	}
	return 0;
}

