#include <iostream>
using namespace std;
#include <string.h>

int getWordCount(char *p)
{
	int num=0;
	for(;*p!='\0';p++)
	{
		if((*p>='A'&&*p<='Z')||(*p>='a'&&*p<='z')&&((*(p+1)==' ')||(*(p+1)=='\0')))
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


