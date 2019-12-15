#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char * a)
{
	int count=0;
	int len=strlen(a);
	for(int i=1;i<len;i++)
	{
		if((a[i]==' '||a[i]=='\t')&&(a[i-1]!=' '&&a[i-1]!='\t'))
			count++;
	}
	if(a[len-1]==' '||a[len-1]=='\t') return count;
	else return count+1;
}

int main()
{
	char *s1,s2[100];
	cin.getline(s2,100);
	s1=s2;
	cout<<getWordCount(s1);
	return 0;
 }
