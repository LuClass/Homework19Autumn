#include<iostream>
using namespace std;
#include<string.h>

int getWordCount(char a[]){
	int len = strlen(a);
	int num = 0;
	for(int i=0;i<len;i++){
		if(a[i]==' '||a[i]=='	'){
			num++;
		}
	}
	return num+1;
}

int main(){
	char a[128];
	cin.getline(a,128);
	cout<<getWordCount(a); 
	return 0;
}
