#include <iostream>
#include <string.h>
using namespace std;
void trim(char str[]) {
	int i=0,j=strlen(str)-1;
	while(str[i]==' ') i++;
	while(str[j]==' ') j--;
	for(int a=0;a<20-i;a++) {
			str[a]=str[a+i];
	}
}
int main(){
	char str[20];
	cin.getline(str,20);
	trim(str);
	cout<<str<<endl;
}
