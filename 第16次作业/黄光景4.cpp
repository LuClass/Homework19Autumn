#include<iostream>
#include<string.h>
using namespace std;

void fsort(char * c[],int n)
{
  char * temp;
   for(int i=0;i<n-1;++i){
	for(int j=i;j<n-1;++j){
	  if(strcmp(c[j],c[j+1])>0)
	   temp=c[j];
     	c[j]=c[j+1];
	    c[j+1]=temp;
     	}
	}
	for(int i=0;i<n;++i)
	cout<<c[i]<<endl;
}

/*void repsort(char *b[], int *a[],char *c[],int n)
{ int m=0;a[0]=0;
  for (int i=0;i<n-1;i++)
  {
  for(int j=i+1;j<n;j++)
   if(strcmp(c[i],c[j])==0) b[m]=c[i],a[m]++;
    
  }
}*/

int main()
{ int n;
   cin>>n;
   char *c[10];
   for(int i=0;i<n;i++) cin.getline(c[i],20) ;
  fsort(c,n);
  //repsort(b,a,c,n);
}
