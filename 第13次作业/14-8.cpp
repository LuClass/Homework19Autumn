#include<iostream>
#include<string.h>

using namespace std;

int getWordCount(char a[]){
	int i,count=0,len;
	len=strlen(a);
	for(i=0;;i++){
		if(a[i]==' ') break;
	}
	for(;;){
		for(;;i++)
			if(a[i]==' '||a[i]==0) break;
		count++;
		for(i+=1;i<len;i++)
			if(a[i]!=' ') break;
		if(a[i]==0) break;
	}
	return count;
} 

int main(){
	char a[1000];
	memset(a,0,sizeof(a));
	cin.getline(a,1000);
	cout<<getWordCount(a);
	return 0;
}
