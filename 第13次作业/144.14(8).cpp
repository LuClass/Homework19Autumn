#include <iostream>
#include <string.h> 
using namespace std;

int getWordCount(char a[])
{
	int i,num=0;
	int len = strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0')){
		
		  num++;
		} 
		
	}
	num++;
	return num;
}

int main()
{
	char ch[20];
	cin.getline(ch,20);
	int j = getWordCount(ch);
	cout<<j<<endl;
	return 0;
}

