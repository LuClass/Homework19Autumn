#include <iostream>
using namespace std;
const int n=100;
int getWordCount (char*a){
	int count=0;
	while (*a){
		if(((*a>='A'&&*a<='Z')||(*a>='a'&&*a<='z'))&&((*(a+1)==' ')||(*(a+1)=='\0')))
		count++;a++;
	}
	return count;
}
int main(){
	char a[n];
	cin.getline (a,n);
	cout<<getWordCount(a);
}
