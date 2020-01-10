#include<iostream>
#include<string.h>
#define MAX 50
using namespace std;
int main(){
	char c[MAX];
	cin.getline(c,MAX);
	int x=strlen(c);
	int n(char a[],int num);
	n(c,x);
}
int n(char a[],int num){
	int count=0,number=0;
	char *x=a;
	char b[count][50];
	for(;*x;x++){
		while(*x>='1'&&*x<='9'){
			b[count][number]=*x;
			x++;
			number++;
			if(*x<'1'||*x>'9'){
				count++;
			}
		}
	}
	cout<<count;
	return count;
}
