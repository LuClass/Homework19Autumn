#include <iostream>
using namespace std;
int main (){
	char s[50];
	cin.getline(s,50);
	for(int i=0;s[i];i++){
		if(s[i]>='A'&&s[i]<='Z')
		 s[i]+=32;
		 cout<<s[i];
	}
	return 0;
} 
