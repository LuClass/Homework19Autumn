#include<iostream>
#include<string.h>
#define MAX 3
using namespace std;

void getRev(char* a[])
{
	int num[MAX],len=0,n=0;
	for(int x=0;x<MAX;x++)
	{
		len=strlen(a[x]);
		for(int y=0;y<len-1;y++)
		{
			for(int z=y+1;z<len;z++)
			{
				if(*(a[x]+y)>*(a[x]+z))
					n++;
			}
		}
		num[x]=n;
		n=0;
	}
	int temp1;
	char temp2[20];
	for(int i=0;i<MAX-1;i++)
	{
		for(int j=0;j<MAX-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp1=num[j];
				num[j]=num[j+1];
				num[j+1]=temp1;
				strcpy(temp2,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp2);
			}
		}
	}
	for(int w=0;w<MAX;w++)
	{
		cout<<a[w]<<"  "<<num[w]<<endl;
	}
}

int main(void)
{
	char ch[MAX][20];
	for(int x=0;x<MAX;x++)
		cin.getline(ch[x],20);
	char* a[MAX];
	for(int y=0;y<MAX;y++)
		a[y]=ch[y];
	void (*p) (char* a[])=getRev;
	p(a);
	return 0;
}
