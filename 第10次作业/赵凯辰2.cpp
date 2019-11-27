#include<iostream.h>
#include<time.h>
#include<stdlib.h>
void getrandom(int a[],int n)
{    srand(time(NULL));
	 for(int i=0;i<n;i++)
     {   a[i]=rand()%100;
	     //cout<<a[i]<<'\t';
	 }
}
void getmax(const int a[],int n)
{    int sum=a[0],j=0;
     for(int i=0;i<n;i++)
         if(a[i]>sum)
		 {   sum=a[i];
		     j=i;
		 }
	 cout<<j<<'\t'<<sum;
}
void main()
{    int a[100];
     getrandom(a,100);
	 getmax(a,100);
}