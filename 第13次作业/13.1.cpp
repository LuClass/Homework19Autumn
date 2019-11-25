#include <iostream>
#define n 20
using namespace std;
int getWordCount(char a[]){
	int sum=0;
	for (int i=0;a[i];i++){
	 if((a[i]=='\0'&&a[i+1]!='\0')||a[i]=='\t')
	   sum++;
	}
	return sum+1;
} 

