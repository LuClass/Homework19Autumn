#include<iostream>
#define MAX 100
using namespace std;
bool isAlpha(char c){
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
		return true;
	}
	else return false;
}
int getWordCount(char *s){
	int sum=0;
	char *temp;
	if(isAlpha(*s)){
		while(isAlpha(*s)){
			s++;
		}
		if(*s==' ') sum++;
	}
	while(*(s+1)!=0){
		if(*(s-1)==' '){
			while(isAlpha(*s)){
				s++;
			}
		    if(*(s)==' '){
			    sum++;
		    }
	    }
	s++;
	}
	if(*(s-1)==' '&&isAlpha(*s)){
		sum++;
	}	
	return sum;
}
int main(){
	char s[MAX];
	cin.getline(s,MAX);
	cout << getWordCount(s);
}
