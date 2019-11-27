#include<iostream>
#define MAX 5
#include<string.h>
using namespace std;
int getRev(char a[])
{
	int count=0;
	for(int i=1;a[i];i++)
		for(int j=0;j<i;j++)
			if(a[j]>a[i])
				count++;
	return count;
 } 
 
 int main()
 {
 	char s[MAX][20],temp2[20];
 	int count[MAX],temp1;
 	for(int i=0;i<MAX;i++)
 	{
 		cin.getline(s[i],20);
		count[i]=getRev(s[i]);
	 }
 	for(int i=0;i<MAX-1;i++)
 		for(int j=0;j<MAX-1-i;j++)
		 {
		 	if(count[j]>count[j+1])
		 	{
		 		temp1=count[j];
		 		count[j]=count[j+1];
		 		count[j+1]=temp1;
		 		strcpy(temp2,s[j]);
		 		strcpy(s[j],s[j+1]);
		 		strcpy(s[j+1],temp2);
			 }
		  } 
	for(int i=0;i<MAX;i++)
	cout<<s[i]<<"  "<<count[i]<<endl;
	return 0;
 }
