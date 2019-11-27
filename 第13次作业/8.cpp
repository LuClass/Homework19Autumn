#include <iostream>
using namespace std;
const int n=100;
int getWordCount(char a[]){
	int count=0,j=0;
	for (int i=0;a[i];i++){
	if ((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
	while (1){
		j++;
	 if(a[i+j]<'A'||a[i+j]>'Z'&&a[i+j]<'a'||a[i+j]>'z'){
	 count++;
	 i=i+j-1;
	 break;
	 }
}

}
return count;
}
 int main(){
 	char s[n];
 	cin.getline (s,n);
 	cout<<getWordCount(s);
 }
