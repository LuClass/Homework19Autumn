#include <iostream>
using namespace std;
#include <string.h>

bool judge(char a[20],char b[20])
{
	if(strcmp(a,b)==0)
	return 1;
	return 0;
}

int main()
{
	int n;
	cin>>n;
	cin.get();
	char str[10][20];
	for(int i=0;i<n;i++)
	{
		cin.getline(str[i],20);
	}
	int num[10],flag[10];
	int x=0,y=0;
	for(int j=0;j<n;j++)
	{
		num[j]=1;
		flag[j]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(flag[i]!=0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(judge(str[i],str[j]))
				{
					num[x]++;
					flag[j]=0;
				}
			}
		}
		x++;
	}
	char m1[10][20];
	int m2[10];
	for(int i=0;i<n;i++)
	{
		if(flag[i]!=0)
		{
			strcpy(m1[y],str[i]);
			m2[y]=num[i];
			y++;
		}
	}
	char p1[20];
	int p2;
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<y-1-i;j++)
		{
			if(m2[j]<m2[j+1])
			{
				strcpy(p1,m1[j]);
				strcpy(m1[j],m1[j+1]);
				strcpy(m1[j+1],p1);
				p2=m2[j];
				m2[j]=m2[j+1];
				m2[j+1]=p2;
			}
		}
	}
	for(int i=0;i<y;i++)
	{
		cout<<m1[i]<<"´ÎÊýÎª:"<<m2[i]<<endl;
	}
	return 0;
}
