#include<iostream>
using namespace std;
#include<string.h>
void bbsort(char *a[],int n)
{  char *temp;
   for (int i=0;i<n;i++)
  for (int j=0;j<n-i-1;j++)
    if(strcmp(a[j],a[j+1])>0)
    {  temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
	}
}

int main(int n,char *a[])
{ 
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	bbsort(a,n);
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
}
