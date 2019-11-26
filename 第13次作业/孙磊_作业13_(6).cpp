//(6)
#include<iostream>
#include<string.h>
#define MAX 5
using namespace std; 
int getRev(char a[]){
	int count=0;
	for(int i=0; i<strlen(a)-1; i++)
		for(int j=i; j<strlen(a); j++)
			if(i<j&&a[i]>a[j])
			count++;
	return count;
}

int main(){
	char a[MAX][20];
	int count[MAX];		// ÄæĞòÊıÊı×é 
	for(int i=0; i<MAX; i++){
		cin.getline(a[i],20);
		count[i]=getRev(a[i]);
	}
	for(int i=0;i<MAX-1;i++){			//	Ã°ÅİÅÅĞò 
		for(int j=0;j<MAX-i-1;j++){
			if(count[j]>count[j+1]){
				swap(count[j],count[j+1]);
				swap(a[j], a[j+1]);
			}
		}
	}
	for(int i=0;i<MAX;i++){
		cout<<a[i]<<':'<<count[i]<<endl; 
	}
	return 0;
}
	
