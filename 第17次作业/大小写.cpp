using namespace std;
#include <iostream>
#include <string.h>
void bubbleSort(char *p[],int n)
{
	int i,j;
	char *t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(strcmp(p[j],p[j+1])>0)
			{	
				t=p[j]; 
				p[j]=p[j+1]; 
				p[j+1]=t;
			}
}
int main (int b,char *a[])
{
	cin>>b;cin.get();
	for(int i=0;i<b;i++)
	{
		cin.getline(a+i,100);
	}
	bubbleSort(a,b);
	for(int i=0;i<b;i++)
	{
		cout<<*(a+i)<<endl; 
	} 
	return 0;
}
