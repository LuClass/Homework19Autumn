#include<iostream.h>
#define MAX 3
int getRev(char a[])
{   int i,j,rev=0;
    for(i=0;a[i];i++)
		for(j=0;a[j];j++)
			if(a[i]>a[j]&&i<j)
				rev++;
	return rev;
}
void main()
{    int i,j,t,p,count[2][MAX];
	 char a[MAX][20];
     for(i=0;i<MAX;i++)
	     cin>>a[i];
	 for(i=0;i<MAX;i++)
	 {	 count[0][i]=getRev(a[i]);
	     count[1][i]=i;
	 }
	 for(i=0;i<MAX;i++)
		 for(j=0;j<MAX-1;j++)
		     if(count[0][j]>count[0][j+1])
			 {   t=count[0][j];
			     p=count[1][j];
			     count[0][j]=count[0][j+1];
				 count[1][j]=count[1][j+1];
				 count[0][j+1]=t;
				 count[1][j+1]=p;
			 } 		 
	 for(i=0;i<MAX;i++)
		 cout<<"rev: "<<a[count[1][i]]<<"="<<count[0][i]<<'\n';
}