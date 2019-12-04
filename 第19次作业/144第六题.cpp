using namespace std;
#include <iostream>
#include <string.h>
#define MAX 6
int getRev(char *a)
{
	int count=0;
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a+i,a+j)>0)
			  count++;
		}
	}
	return count;
}
int main ()
{
	int temp;
	char a[MAX][21];
	char b[MAX][21];
	int num[MAX];
	for(int l=0;l<MAX;l++)
	{
		cin.getline(*(a+l),21);
	}                 
 	for(int i=0;i<MAX;i++)
 	    num[i]=getRev(a[i]);
 	for(int i = 0;i<MAX-1;i++)	
  		for(int j = 0;j< MAX - 1 - i;j++)
  			if(num[j+1]<num[j])		 
  			{
  				temp = num[j];
  				num[j]=num[j+1];
  				num[j+1]=temp;
 				strcpy(b[0],a[j]);
  				strcpy(a[j],a[j+1]);
  				strcpy(a[j+1],b[0]);  
 			}
  	for(int i=0;i<MAX;i++)		
  	cout<<a[i]<<":"<<num[i]<<endl;
}	               
