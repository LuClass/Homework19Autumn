#include<iostream>
#include<string.h>
using namespace std;

char* trim(char* s)
{
	char temp;
	int n=strlen(s);
	for(int x=0;x<n&&*(s+x)!=0;x++)
	{
		while(*(s+x)==' ')
		{
			for(int y=x;y<n;y++)			
				*(s+y)=*(s+y+1);			
		}
	}
	return s;
}

int main(void)
{
	char s[40];
	cin.getline(s,40);
	cout<<endl<<strlen(s)<<endl;
	char* s1=trim(s);
	cout<<endl<<trim(s1)<<endl<<endl<<strlen(s1)<<endl;
	return 0;
}
