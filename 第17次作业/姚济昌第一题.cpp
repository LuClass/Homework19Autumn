//µÚÒ»Ìâ 
#include<iostream>
using namespace std;

int getlength(char *d)
{
	int len=0,i=0;
	while(*(d+i))
	{
		len++;
		i++;
	}
	return len;
}

void convert(char *d,int n)
{
	for (int i=0;i<n;i++)
	{
		if (*(d+i)>='A'&&*(d+i)<='Z')
		*(d+i)=char(int(*(d+i))+32);
	}
}

int main()
{
	char d[100];
	cin.getline(d,100);
	int len=getlength(d);
	convert(d,len);
	for (int k=0;k<len;k++)
	cout<<*(d+k);
	return 0;
}
