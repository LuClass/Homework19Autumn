#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{
	int n=strlen(a);
	int num = 0;
	for(int i=0;i <n;i++)
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{if((a[i+1]>='a'&&a[i+1]<='z')||(a[i+1]>='A'&&a[i+1]<='Z'))
		continue;
		else
		num++;
		}
	}
		return num;
}
int main(){
	char a[100];
	cin.getline(a,100);
	cout << getWordCount(a);
}
