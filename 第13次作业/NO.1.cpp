#include <iostream>
#include <string.h>
#define MAX n
using namespace std;
int num;
char b[500];
char c[500];
int getRev(char b[])
{
	num=strlen(b);
	int j=0;
	int count=0;
	for (int i=0;i<num-1;i++)
	{
		for (int j=0;j<num;j++)
		{
			if (b[i]>b[j]&&i<j)
			count+=1;
		}
	}
	return count;
}
int main()
{
	int n;
	int time1;
	cin>>n;
	char a[MAX][21];
	for (int m=0;m<MAX;m++)
	{
		cin>>a[m];
	}
	for (int d=0;d<MAX;d++){
	c[d]=getRev(a[d]);
	}

	int num1,num2;
  	char temp1[500];
	char temp2[500][500];              
	for (int num1=0;num1<MAX-1;num1++)
	for (int num2=0;num2<MAX-1-num1;num2++)
	{
		if(c[num2]>c[num2+1])
		{
			temp1[num2]=c[num2];
			c[num2]=c[num2+1];
			c[num2+1]=temp1[num2];
			strcpy(temp2[num2],a[num2]);
			strcpy(a[num2],a[num2+1]);
			strcpy(a[num2+1],temp2[num2]);
		}
	}
	for (int d=0;d<MAX;d++){
	cout<<a[d]<<endl;
	cout<<getRev(a[d])<<endl;
    }
}
