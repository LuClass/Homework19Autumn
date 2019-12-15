#include<iostream>
#include<string.h>
using namespace std;
void bubbleSort(char *s[],int x){
	char *temp;
	for(int i=0;i<x-1;i++)
		for(int j=0;j<x-1-i;j++){
			if(strcmp(s[j],s[j+1])>0){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	for(int i=0;i<x;i++)
		cout<<s[i]<<endl;
}
int main(int argc,char *argv[]){
	bubbleSort(argv,argc);
}
