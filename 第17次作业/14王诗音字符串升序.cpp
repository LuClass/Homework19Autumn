#include<iostream>
#include<string.h>
using namespace std;
const int n=5;
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
int main(){
	char *strs[n],s[n][20];
	for(int i=0;i<n;i++){
		cin.getline(s[i],20);
		strs[i]=s[i];
	}
	cout<<endl;
	bubbleSort(strs,n);
}
