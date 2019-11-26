using namespace std;
#include <iostream>
#include <string.h>
#define MAX 3
int getRev(char a[])
{
	int n;
	n=strlen(a);
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int temp;
	char num[21];
	int sum[MAX];
	char b[MAX][21];
	for(int i=0;i<MAX;i++)
	{
		cin>>b[i];
	}
	for(int j=0;j<MAX;j++)
	{
		sum[j]=getRev(b[j]); //ÄæÐòÊý 
	}
	for(int k=0;k<MAX-1;k++) //ÅÅÐò 
	{
		for(int l=0;l<MAX-1-k;l++)
		{
			if(sum[l]>sum[l+1])
			{
				temp=sum[l];
				sum[l]=sum[l+1];
				sum[l+1]=temp;
				strcpy(num,b[l]);
				strcpy(b[l],b[l+1]);
				strcpy(b[l+1],num);
			}
		}
	}
	for(int m=MAX-1;m>=0;m--)
	{
		cout<<b[m]<<" "<<sum[m]<<endl;
	}
	return 0;
}
