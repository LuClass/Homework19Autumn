#include<iostream>
#include<string.h>
#define MAX 5 
int getRev(char []);
int getWordCount(char a[]);
bool isAlpha(char c);
using namespace std;
int main(){
	char a[MAX][21]={"asdfasdf","sfnhsdiufe","hdsfjkweuf","diewtnhisd","sdiof"}; //T6
	cout << "按逆序数升序的顺序排列：";
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX-1;j++){
			if(getRev(a[j])>getRev(a[j+1])){
			   char temp[21];
			   strcpy(temp,a[j+1]);
			   strcpy(a[j+1],a[j]);
			   strcpy(a[j],temp);
		    }
		}
	}
	for(int i=0;i<MAX;i++){
		cout << "逆序数：" << getRev(a[i])<<" "<<"该串为："<< a[i]<< endl;
	}
	char b[100]="sadf ds fs d  aert sad fssdfd s";                       //T8
	cout << "一共有" <<getWordCount(b)<<"单词"<< endl;
}
int getRev(char a[]){
	int length=strlen(a);
	int sum=0;
	for(int i=0;i<length-1;i++){
		for(int j=i+1;j<length;j++){
			if(a[i]>a[j]){
				sum++;
			}
		}
	}
	return sum;
}
int getWordCount(char a[]){
	int count=0; 
	int length=strlen(a);
	for(int i=0;i<length;i++){
		if(isAlpha(a[i])&&!isAlpha(a[i+1])){
			count++;
		}
	}
	return count;
}
bool isAlpha(char c){
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	return true;
	else return false;
}
