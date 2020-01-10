#include <iostream>
#include <string.h>
#define N 100
using namespace std;
char *k[100];
int count(char *s1)
{
	int num=0;
    for (int s=0;s<100;s++)
    k[s]=NULL;
    while(*s1!=0)
	{	char *s2=s1+1;
		if(*s1<='9'&&*s1>='0'&&(*s2>'9'||*s2<'0'))
		{
		k[num]=s1;
		num++;
		}*s1++;
	}
	return num;
}
void save(char *s1,int n)
{
	const int line=n;
	char b[n][100];
	for (int j=0;j<line;j++)
	{
		while(k[j]!=s1)
		{
			if(*s1<='9'&&*s1>='0')
			strcpy(b[j],s1);
			s1++;
		}
	}
	for (int k=0;k<line;k++)
	cout<<b[k]<<endl;
}
int main()
{
    char a[N];char *s1=&a[0];
	cin.get(a,N);
	cout<<a<<endl;
	count(s1);
	int z=count(s1);
	cout<<z<<endl;
	save(s1,z);
}

