#include<iostream>
#include<string.h>
using namespace std;

char* trim(char* str)
{
	int n=strlen(str);
	int i,j;
	for(i=0;i<n;i++)
	{
		while(*(str+i)==' ')
		{
			for(j=i;j<n;j++)			
				*(str+j)=*(str+j+1);			
		}
	}
	return str;
}

int main(void)
{
	char s[50];
	cin.getline(s,50);
	char* s1=trim(s);
	cout<<s1<<endl;
	return 0;
}

