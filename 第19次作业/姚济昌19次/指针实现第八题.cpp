#include<iostream>
using namespace std;

int getlength(char *pa)
{
	int length=0;
	while(*pa++)
	length++;
	return length;
}

bool check(char *pa)
{
	if ((int)*pa>=65&&(int)*pa<=90||(int)*pa>=97&&(int)*pa<=122)
	return true;
	else
	return false;
}

int getWordCount(char *pa)
{
	char *aa=pa;
	int count=0,len=getlength(aa),stop=0;
	for (int t=0;t<=len;t++)
	{
		if (check (pa+t))
		{
			stop++;
		}
		if (*(pa+t)==' '&&stop!=0||(int)*(pa+t)==0&&check(pa+t-1))
		{
			stop=0;
			count++;
		}
	}
	return count;
}

int main()
{
	char a[100];
	cin.getline(a,100);
	cout<<getWordCount(a)<<endl;
	return 0;
}