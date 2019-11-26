#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{
	int count=0;
	int len=strlen(a);
	for(int i=1;i<len;i++)
	{
		if((a[i]==' '||a[i]=='\t')&&(a[i-1]!=' '&&a[i-1]!='\t'))
			count++;
	}
	return count+1;
}

int main()
{
	char s[100];
	cin.getline(s,100);
	cout<<getWordCount(s);
	return 0;
 } 
