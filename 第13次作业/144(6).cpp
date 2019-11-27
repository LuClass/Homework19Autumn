#include <iostream>
#include <string.h>
#define MAX 6
using namespace std;
int getRev(char a[])
{
	int num=0;
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)	
	        if(a[i]>a[j])
	        num++;
	}
	return num;
}
int main()
{
	int temp;
	int num[MAX];
	char a[MAX][21]={"DAABEC",
		             "SHYDBV",
		             "KJHJDSVV",
		             "YSVBUSYVB",
		             "BVJCHHF",
	                 "DFVIOUMGOVMD"};
	char b[MAX][21];                 
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
























