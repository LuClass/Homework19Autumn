#include <iostream>
#include <string.h>
using namespace std;
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
	int max;
	cin>>max; max++;
	char (*s)[20]=new char [max][20];
	int *p=new int [max];
	for(int i=0;i<max;i++){
		cin.getline(s[i],20);
		p[i]=getRev(s[i]);
	}
	for(int i=0;i<max-1;i++){
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
	for(int i=1;i<max;i++){
		cout<<p[i]<<' '<<s[i]<<endl;
	}
	delete []s;
	delete []p;
	return 0;
}

