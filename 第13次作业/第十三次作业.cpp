(6).
#include <iostream>
#include <string.h>
using namespace std;
#define MAX
int getRev (char a[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	 for(int j=0;j<n;j++)
	 {
	 	if(i<j&&a[i]>a[j])
	 	count++;
	 }
	 return count;
}
void bubbleSort (char b[MAX],char a[MAX][21])
{
	int i,j,temp;
	char t[21];
	for(i=0;i<MAX-1;i++)
	 for(j=0;j<MAX-1-i;j++)
	 {
	 if(b[j]>b[j+1])
	 {
	 	temp=b[j];
	 	b[j]=b[j+1];
	 	b[j+1]=temp;
	 	strcpy(t,a[j+1]);
	 	strcpy(a[j+1],a[j]);
	 	strcpy(a[j],t);
	 }
	 }
}
int main ()
{
	int i;
	char a[MAX][21],b[21];
	cin.getline(a,21);
	int getRev(b,MAX);
	void bubbleSort(b,a);
	for(i=0,i<MAX;i++)
	cout<<a[i][21]<<" "<<b[i]<<endl;
	return 0;
}

(8).
#include <iostream>
using namespace std;
int getWordCount(char a[])
{
	int count=0,m=0,i=0;
	while(a[i]!='\0')
	{
	  if(a[i]==' '||a[i]=='\t')
	  m=0;
	  else
	  {
	  	if(m=0)
	  	m=1;
	  	count++;
	  }
	  i++;
	}
	return count;	
}
int main ()
{
	char a[50];
	cin.getline(a,50);
	int getWordCount(a);
	cout<<a<<endl;
	return 0;
}
