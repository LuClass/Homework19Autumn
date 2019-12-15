#include <iostream>
using namespace std;
int getWordCount(char a[100]){
	char*s=a;
	int sum=0;
	for(;*s;s++){
		if(*s>'a'&&*s<'z'&&*(s+1)==' '||*(s+1)=='\t')
		sum++;
	}
	if(*(s-1)==' ')
	return sum;
	else
	return sum+1;
} 
int main (){
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a);
	return 0;
}
