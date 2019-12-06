using namespace std;
#include <stdlib.h>
#include <iostream>
#define MAX 3
#include <string.h>
void getRev(char *s1[],int s2[],int n)
{
	int count,b;
	for(int i=0;i<n;i++)
	{
		char *s3=s1[i];
		count=0;
		b=strlen(s3);
		for(int j=0;j<b-1;j++)
		{
			for(int k=j+1;k<b;k++)
			{
				if(s3[j]>s3[k])
				{
					count++;
				}
			}
		}
		s2[i]=count;
	}
	char *temp2;
	int temp1;
	for(int l=0;l<n-1;l++)
	{
		for(int m=0;m<n-1-l;m++)
		{
			if(s2[m]>s2[m+1])
			{
				temp1=s2[m];
				s2[m]=s2[m+1];
				s2[m+1]=temp1;
				temp2=s1[m];
				s1[m]=s1[m+1];
				s1[m+1]=temp2;
			}
		}
	}
}
int main()
{
	char *str[MAX];
	int res[MAX];
	for(int i=0;i<MAX;i++)
	{
		str[i]=(char*)malloc(sizeof(char)*21);
		cin>>str[i];
		res[i]=0;
    }
    getRev(str,res,MAX);
    for(int j=0;j<MAX;j++)
    {
    	cout<<str[j]<<":"<<res[j]<<endl;
	}
    return 0;
}
