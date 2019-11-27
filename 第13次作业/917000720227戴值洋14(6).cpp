#include <iostream>
using namespace std;
#include <string.h>
#define MAX 5 

int getRev(char a[])
{
	int num=0;
	for(int i=0;i<strlen(a)-1;i++)
	{
		for(int j=i+1;j<strlen(a);j++)
		{
			if(a[i]>a[j])
			{
				num++;
			}
		}
	}
	return num;
} 

void sort(char a[][21])
{
	char b[21];
	for(int i=0;i<MAX-1;i++)
	{
		for(int j=0;j<MAX-1-i;j++)
		{
			if(getRev(a[j])>getRev(a[j+1]))
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}
	}
}

int main()
{
	char a[MAX][21];
	for(int i=0;i<MAX;i++)
	{
		cin.getline(a[i],21);
	}
	cout<<"按逆序数升序输出结果为："<<endl;
	sort(a);
	for(int j=0;j<MAX;j++)
	{
		for(int k=0;k<strlen(a[j]);k++)
		{
			cout<<a[j][k];
		}
		cout<<" 逆序数为："<<getRev(a[j])<<endl;
	}
	return 0;
}

