#include<iostream>
#include<string.h>
using namespace std;
int MAX;
void getRev(char* a[])
{
 	int num[MAX],len=0,n=0;
 	for(int x=0;x<MAX;x++)
 	{
 		len=strlen(a[x]);
 		for(int y=0;y<len-1;y++)
 		{
 			for(int z=y+1;z<len;z++)
 			{
 				if(*(a[x]+y)>*(a[x]+z))
 					n++;
 			}
 		}
 		num[x]=n;
 		n=0;
 	}
 	int temp1;
 	char temp2[20];
 	for(int i=0;i<MAX-1;i++)
 	{
 		for(int j=0;j<MAX-1-i;j++)
 		{
 			if(num[j]>num[j+1])
 			{
 				temp1=num[j];
 				num[j]=num[j+1];
 				num[j+1]=temp1;
 				strcpy(temp2,a[j]);
 				strcpy(a[j],a[j+1]);
 				strcpy(a[j+1],temp2);
 			}
 		}
 	}
 	for(int w=0;w<MAX;w++)
 	{
 		cout<<a[w]<<"  "<<num[w]<<endl;
 	}
}

int main()
{
	cin>>MAX;
	char (*ch)[20]=new char[MAX][20];
 	for(int x=0;x<MAX;x++)
 		cin.getline(ch[x],20);
	char * a[MAX];
 	for(int y=0;y<MAX;y++)
 		a[y]=ch[y];
 	getRev(a);
 	delete [] ch; 
  return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
int n;
void f(char *a[])
{
	int i,j;
	char temp2[20];
	for(i=0;i<n-1;i++)
	 for(j=0;j<n-1-i;j++)
	 if(strcmp(a[j],a[j+1])>0)
	 {
	 	strcpy(temp2,a[j]);
 		strcpy(a[j],a[j+1]);
 		strcpy(a[j+1],temp2);
	 }
	 for(int i=0;i<n;i++)
	 cout<<a[i]<<" ";
}
void f1(char *a[])
{
	int count=0,num[n];
	char temp[20];
	for(int i=0;i<n-1;i++)
	{
	 for(int j=0;j<n-1-i;j++)
	 {
	  if(strcmp(a[j],a[j+1])==0)
	  {
	  	count++;
	  }
     }
	  num[i]=count;
	  count=0;
    }
    for(int i=0;i<n-1;i++)
    {
    	for(int j=0;j<n-1-i;j++)
    	{
    	if(num[j]<num[j+1])
    	{
	 	strcpy(temp,a[j]);
 		strcpy(a[j],a[j+1]);
 		strcpy(a[j+1],temp);    		
		}
	}
}
	 for(int i=0;i<n;i++)
	 cout<<a[i]<<" "<<num[i]<<endl;
}
int main ()
{
	cin>>n;
	char (*ch)[20]=new char[n][20];
 	for(int x=0;x<n;x++)
 	cin.getline(ch[x],20);
	char * a[n];
 	for(int y=0;y<n;y++)
 	a[y]=ch[y];
 	f(a);
 	f1(a);
 	delete [] ch; 
  return 0;
}
 
 
 
 
 
