using namespace std;
#include <iostream>
#include <string.h>
#define MAX 3 
int getRev(char a[])
{
	int count=0;
	int n=strlen(a);
	for(int i=0;i<n;i++)
	  for(int j=i+1;j<=n;j++)
	  {
	  	if(a[i]>a[j])
	  	  count++;
	  }
	  cout<<count<<endl;
	  return count;
}
int main()
{
	char a[MAX][21]={"DAABC","THDFV","DDJDRCS"};
	int t=0,b[MAX];
	char c[MAX][21];
	for(int k=0;k<MAX;k++)
      b[k]=getRev(a[k]);
     for(int i=0;i<MAX-1;i++)
       for(int j=0;i<MAX-i-1;j++)
         if(b[j+1]<b[j])
         {
         	t=b[j];
         	b[j]=b[j+1];
         	b[j+1]=t;
         	strcpy(c[0],a[j]);
         	strcpy(a[j],a[j+1]);
         	strcpy(a[j+1],c[0]);
         }
      for(int i=0;i<MAX;i++)
        cout<<a[i]<<" "<<b[i]<<endl;
	  return 0;
}	  
