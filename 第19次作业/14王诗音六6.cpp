#include<iostream>
#define MAX 5
#include<string.h>
using namespace std;
int getRev(char * a)
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
 	char *strs[MAX],s[MAX][20],*temp2;
 	int count[MAX],temp1;
 	for(int i=0;i<MAX;i++)
 	{
 		cin.getline(s[i],20);
 		strs[i]=s[i];
		count[i]=getRev(strs[i]);
	 }
 	for(int i=0;i<MAX-1;i++)
 		for(int j=0;j<MAX-1-i;j++)
		 {
		 	if(count[j]>count[j+1])
		 	{
		 		temp1=count[j];
		 		count[j]=count[j+1];
		 		count[j+1]=temp1;
		 		temp2=strs[j];
		 		strs[j]=strs[j+1];
		 		strs[j+1]=temp2;
			 }
		  }
	for(int i=0;i<MAX;i++)
	cout<<strs[i]<<"  "<<count[i]<<endl;
	return 0;
 }
