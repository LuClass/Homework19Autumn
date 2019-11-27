#include<iostream>
#include<string.h>
using namespace std;
#define MAX 4
int getRev(char a[])
{
	int count;
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			count++;
		}
	}
	return count;
}
int main()
{
	char a[20];
	char A[MAX][20];
	int b[MAX];
	for(int i=0;i<MAX;i++)
	{
		cin.getline(a,20);
		strcpy(A[i],a);
		b[i]=getRev(a);
	}
	for(int i=0;i<MAX;i++)
	{
		for(int j=i+1;j<MAX;j++)
		{
			if(b[i]>b[j])
			{
				int t1;    char c[20];
				t1=b[i];    strcpy(c,A[i]);
				b[i]=b[j];  strcpy(A[i],A[j]);
				b[j]=t1;    strcpy(A[j],c);
			}
		}
	}
	cout<<"ÅÅÐò½á¹û"<<endl; 
	for(int k=0;k<MAX;k++)
	{
		cout<<A[k]<<":"<<b[k]<<endl;
	}
	
}
