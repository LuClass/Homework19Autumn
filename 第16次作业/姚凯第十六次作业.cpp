(4).
#include <iostream>
#include <string.h>
using namespace std;
void f(char (*p)[],int n)
{
	int i,j,k[10]={0};
	char *temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(p+i)==*(p+j))
			k[i]++;
		}
		k[i]=k[i]-1;
	}
	cout<<k[i];
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-1-i;j++)
	 {
	 	if(k[j]>k[j+1])
	 	{
	 		strcpy(temp,*(p+j));
	 		strcpy(*(p+j),*(p+j+1));
	 		strcpy(*(p+j+1),temp);
		 }
	 }
}
void bubblesort(char (*p)[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-1-i;j++)
	 {
	 	if((strcmp(*(p+j),*(p+j+1))>0
	 	{
	 		strcpy(temp,*(p+j));
	 		strcpy(*(p+j),*(p+j+1));
	 		strcpy(*(p+j+1),temp);
		 }
	 }
}
int main ()
{
	int i,n;
	char a[10][10];
	cin>>n;
    for(i=0;i<10;i++)
    cin.getline(a[i],10);
    bubblesort(a,10)
    f(a,10);
	return 0;
}

(5).
#include <iostream>
using namespace std;
#define N 100
#define M 100
int main ()
{
	char p[N];
	int (*a)[M];
	int count=0,m=0,i;
	cin.getline(p,N);
	for(i=0;p[i]!=0;i++)
	{
	 if(p[i]<'0'||p[i]>'9')
	 m=0;
	 else if(m==0)
	 {
	 	m=1;
	 	count++;
	 }
	} 
	cout<<count<<endl;
	for(i=0;p[i]!=0;i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		cout<<p[i];
		else
		cout<<" ";
	}
	return 0;
}

