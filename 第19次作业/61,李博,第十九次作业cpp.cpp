(6).#include<iostream>
#include<string.h>
using namespace std;
#define MAX 5
int getRev(char a[]){
	int count=0;
	
	char *p=a; 
	char *q=a;
	for(;p;p++)
	   for(;q;q++)
	   if(p<q&&*p>*q)count++;
	   return count;
}
int main(){
		int i,j;
 	char a[MAX][20];
 	int num[MAX];

 	for(i=0;i<MAX;i++)
 	cin>>a[i];

 	for(i=0;i<MAX;i++)
 	num[i]=getRev(a[i]);

 	for(i=0;i<MAX-1;i++)
 	{
 		int t;
 		char *tem;
 		for(j=i+1;j<MAX;j++)
 		{
 			if(num[i]>num[j])
 			{
 				t=num[i];num[i]=num[j];num[j]=t;
 				strcpy(tem,a[i]);strcpy(a[i],a[j]);strcpy(a[j],tem);
 			}
 		}
 	}

 	for(i=0;i<MAX;i++)
 	cout<<a[i]<<" : "<<num[i]<<endl;
 	return 0;
 }
(8) .#include<iostream>
 using namespace std;
 int getWordCount(char *a)
 {
 	int count=0;
 	for(;*a;a++)
 	{
 	  if((*a!='\t')&&(*a!=' ')&&(*(a+1)=='\t'||*(a+1)==' '))
 	  count++;
     }
 	return count+1;
 }

 int main(void)
 {
 	char a[100]={0};
 	cin.getline(a,100);
 	cout<<getWordCount(a)<<endl;
 }
