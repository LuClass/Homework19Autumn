using namespace std;
#include <stdlib.h>
#include <iostream>
#define MAX 3
#include <string.h>
void getRev(char *s1[],int s2[],int n)
{
	int count,b,i,j,x;
	char*y;
	for(i=0;i<n;i++)
	{
		char *str=s1[i];
		count=0;
		b=strlen(str);
		for(j=0;j<b-1;j++)
		{
			for(int k=j+1;k<b;k++)
			{
				if(str[j]>str[k])
				{
					count++;
				}
			}
		}
		s2[i]=count;
	}
    int l,m;
	for(l=0;l<n-1;l++)
	{
		for(m=0;m<n-1-l;m++)
		{
			if(s2[m]>s2[m+1])
			{
				x=s2[m];
				s2[m]=s2[m+1];
				s2[m+1]=x;
				y=s1[m];
				s1[m]=s1[m+1];
				s1[m+1]=y;
			}
		}
	}
}
int main()
{
	char *str[MAX];
	int a[MAX];
	for(int i=0;i<MAX;i++)
	{
		str[i]=(char*)malloc(sizeof(char)*21);
		cin>>str[i];
		a[i]=0;
    }
    getRev(str,a,MAX);
    for(int j=0;j<MAX;j++)
    {
    	cout<<str[j]<<":"<<a[j]<<endl;
	}
    return 0;
}
