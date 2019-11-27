#include <string.h>
#include <iostream>
using namespace std;
int getWordCount(char a[]){
    int count=1;
	for(int i=0;a[i]!='0';i++)
	{for(;a[i]==' ';i++){
	if(a[i+1]==' ')
	continue;
	else
	count++;
	break;
	}
}cout<<count;
}
int main(){
	char a[100];
	cin.getline(a,2000);
	getWordCount(a);
}
