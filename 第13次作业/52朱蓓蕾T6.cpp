#include<iostream>
#include<string.h>
#define MAX 4
using namespace std;
int getRev(char a[])
{
int num=0;
int len=strlen(a);
for(int i=0;i<len;i++)
{
	for(int j=i+1;j<len;j++)
	{if(a[i]>a[j])
		{num++;	
		}
	}
}return num;
}
int main()
{
	int m[MAX];
	char s[MAX][21]={"DAABEC",
	                "bhjabdb",
	                "zrgxbqwb",
					"ewgfuydsh"};
	int i, j;
	char temp[1];
	for(i=0;i<MAX;i++)
		{
	    m[i]=getRev(s[i]);
	    } 
	for(i = 0; i < MAX; i++)
		{
		for(j = 0; j <=MAX; j++)
		 {	
			if(m[j] > m[j+1])
			{	strcpy(s[j], temp);
				strcpy(s[j+1], s[j]);
				strcpy(temp,s[j+1]);
            }   
		 }
		}  
	for (int i = 0; i < MAX; i++) {
		cout<<s[i]<<"ÄæÐòÊýÎª"<<getRev(s[i])<<endl;
	}	
}
