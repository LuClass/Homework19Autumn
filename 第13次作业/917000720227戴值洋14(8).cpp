#include <iostream>
using namespace std;
#include <string.h>

int getWordCount(char a[])
{
	int num=0;
	for(int i=0;i<strlen(a);i++)
	{
		if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z')&&((a[i+1]==' ')||(a[i+1]=='\0')))
		{
			num++;
		}
	} 
	return num;
}

int main()
{
	char a[]="what's your name";
	cout<<getWordCount(a);
	return 0;
}

