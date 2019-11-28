#include <iostream>
#include <string.h>
using namespace std;
int getWordCount (char a[]){
	int num=0;
	for (int i=0;a[i];i++)
		if (a[i]=' '&&a[i+1]==' ')
			num++;
	return num+1;
}

int main (){
	char a[100];
	cin.getline(a,100);
	cout<<"The words' number is "<<getWordCount(a)<<"."<<endl;
	return 0;
}
