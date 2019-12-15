#include <iostream>
using namespace std;
#include <string.h>
int main()
{
	char s[100];
	cin.getline(s,100);
	char b[100][100];
	int j=0,m=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			b[j][m]=s[i];
			m++;
		}
		if((s[i]>='0'&&s[i]<='9')&&!(s[i+1]>='0'&&s[i+1]<='9'))
		{
			j++;
			m=0;
		}
	}
	for(int k=0;k<j;k++)
	{
		cout<<b[k]<<endl;
	}
	return 0;
}
