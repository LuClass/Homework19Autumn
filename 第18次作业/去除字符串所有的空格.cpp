#include <iostream>
#include <string.h>
using namespace std;
const int n=11;
void bubbleSort(char *strs, int n){		
	char temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strs[j]==' '){
				temp= strs[j]; 				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}
char *trim(char*s){
	if (s==NULL) return NULL;
	if (strlen(s)==0) return s;
	char *tail=s+strlen(s)-1;
	while (*tail==' ') tail--;
	if (tail<s+strlen(s)-1)
	*(tail+1)='\0';
	return s;
}
int main (){
	char s[]=" ab c 1 2 3";
	bubbleSort (s,n);
	char *s1=s;
	cout<<strlen(s1)<<" "<<s1<<endl;
char *s2=trim(s1);
	cout<<strlen(s2)<<" "<<s2;
}
