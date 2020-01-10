#include<iostream>
#include<string.h>
using namespace std;
void bubblesort(char *p[],int n)
{
	char *temp;   int i,j;
	for(i=0;i<n;i++)
  {  
     for(j=0;j<n-1-i;j++)
	 {
		if(strcmp(p[j],p[j+1])>0)
		{
		 temp=p[j];
		 p[j]=p[j+1];
		 p[j+1]=temp;
		}
	 }
  }
}

int num(char *p[],int n)
{
     	int i,j,count=0,b[n],t;
     	char *r;
	    for(i=0;i<n;i++)
     {      
	       for(j=0;j<n;j++)
       	{
	       if(strcmp(p[i],p[j])==0)
	       count++;
        }
        b[i]=count;count=0;
	 }	
	 for(i=0;i<n;i++)
	 for(j=0;j<n-i-1;j++)
	 {
	 	if(b[j]<b[j+1])
	 	{
	 		t=b[j];
	 		b[j]=b[j+1];
	 		b[j+1]=t;
	 		r=p[i];
	 		p[i]=p[i+1];
	 		p[i+1]=r;
		}
	 }
    for(i=1;i<n+1;i++)
    cout<<b[i]<<"  "<<p[i]<<endl;
} 


int main()
{
	int n,i;cout<<"ÊäÈën£º";cin>>n;
	char k[10][20];
	char *p[]={k[0],k[1],k[2],k[3],k[4],k[5],k[6],k[7],k[8],k[9]};
    
	for(i=0;i<n+1;i++)
    { cin.getline(k[i],20);
      strcpy(p[i],k[i]);
	}
	cout<<"°´×ÖµäÅÅÐò£º"<<endl;
	bubblesort(p,n+1);
	for(i=0;i<n+1;i++)
	cout<<p[i]<<endl;
	cout<<endl;
	num(p,n);
}

