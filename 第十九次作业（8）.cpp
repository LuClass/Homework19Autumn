using namespace std;
#include <iostream>
int getWordCount(char *s)
{
	int count=0;
	while(*s!=0)
	{
        if(*s!=' '&&*s!='\0'&&(*(s+1)==' '||*(s+1)=='\0'))
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
	cin.getline(a,100);
	char *str=a;
	int b=getWordCount(str);
	cout<<b;
	return 0;
}
