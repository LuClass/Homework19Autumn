#include<iostream>
#include<string.h>
using namespace std;

int getWordCount(char* a)
{
	int n=0,len=strlen(a),key=0;
	for(int x=0;x<len;x++)
	{
		if(*(a+x)>='a'&&*(a+x)<='z'&&key==0)
		{
			key=1;
			n++;
		}
		if(*(a+x)>='A'&&*(a+x)<='Z'&&key==0)
		{
			key=1;
			n++;
		}
		if((*(a+x)=='\t'||*(a+x)==' ')&&key==1)		
			key=0;		
	}
	return n;
}

int main(void)
{
	char a[30];
	cin.getline(a,30);
	int (*p)(char*)=getWordCount;
	cout<<p(a);
	return 0;
}
