using namespace std;
#include <iostream>
int getWordCount(char *s)
{
	int count=0;
	while(*s!=0)
	{
		if(*s==' '||*s=='\t')
		{
			*s++;
		}
		else if(*(s+1)==' '||*(s+1)=='\t'||*(s+1)=='\0')
		{
			count++;
			*s++;
		}
		else
		{
			*s++;
		}
	}
	return count;
}
int main()
{
	char a[100];
	char *str=a;
	cin.getline(str,100);
	int b=getWordCount(str);
	cout<<b;
	return 0;
}
