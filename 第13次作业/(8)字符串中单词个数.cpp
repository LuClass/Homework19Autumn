using namespace std;
#include <iostream>
#include <string.h>
int getWordCount(char a[])
{
	int word,count=0;
	int n;
	n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]==' '||a[i]=='\t')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			count++;
		}
	}
	return count;
}
int main()
{
	char a[1000];
	cin.getline(a,100);
	cout<<getWordCount(a);
	return 0;
}
