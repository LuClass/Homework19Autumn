#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

void sort(char* ch[],int n)
{
	char temp[20];
	char* t;
	for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-1-i;j++)
		{
			if (strcmp(ch[j],ch[j+1])>0)
			{
				//strcpy(temp,ch[j]);
				//strcpy(ch[j],ch[j+1]);
				//strcpy(ch[j+1],temp);
				t=ch[j];
				ch[j]=ch[j+1];
				ch[j+1]=t;
			}
		}
	}
}

void count(char* ch[],int n)
{
	char temp[10][20];
	int num[10],key=1,x=0,xx=0;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (!strcmp(ch[j],ch[i]))
			{
				key=0;
				break;
			}
		}
		if (key==1)
			strcpy(temp[x++],ch[i]);
		key=1;
	}
	for (int y=0;y<x;y++)
	{
		int nn=0;
		for (int yy=0;yy<n;yy++)
		{
			if (!strcmp(temp[y],ch[yy]))
				nn++;
		}
		num[xx++]=nn;
	}
	for (int u=0;u<x;u++)
	{
		cout<<setw(20)<<temp[u]<<"   "<<num[u]<<endl;
	}
}

int main(void)
{
	char c[10][20];
	char* ch[]={c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]};
	int n;
	cin>>n;
	cin.getline(c[9],20);
	for (int x=0;x<n;x++)
	{
		cin.getline(c[x],20);
	}
	sort(ch,n);
	cout<<endl<<endl;
	for (int x=0;x<n;x++)
	{
		cout<<ch[x]<<endl;
	}
	cout<<endl<<endl;
	count(ch,n);
	return 0;
}