#include<iostream.h>
void sort(int a[],int n)
{    int i,j,t;
     for(i=0;i<n;i++)
		 for(j=0;j<n-1;j++)
			 if(a[j]>a[j+1])
			 {   t=a[j];
			     a[j]=a[j+1];
                 a[j+1]=t;
			 }   
}
int getSet(int rs[],int a[],int n)
{   int i,j=0;
    sort(a,n);
	for(i=0;i<n;i++)
		if(a[i]!=a[i+1])
		{   rs[j]=a[i];
		    j++;
		}
	return j;
}
int  getTimes(int rs[],int a[],int times[],int n)
{    int i,j=0;
     sort(a,n);
	 for(i=0;i<n;i++)
		 times[i]=1;
	 for(i=0;i<n;i++)
		if(a[i]!=a[i+1])
		{   rs[j]=a[i];
		    j++;
		}
		else
			times[j]++;

	 return j;
}
void print(int rs[],int times[],int j)
{    int i;
     for(i=0;i<j;i++)
		 cout<<rs[i]<<":"<<times[i]<<'\n';
}
void getDrop(int rs[],int a[],int times[],int n)
{    
     int i,j,k,t;
     k=getTimes(rs,a,times,n);
	 for(i=0;i<k;i++)
		 for(j=0;j<k-1;j++)
			 if(times[j]<times[j+1])
			 {   t=rs[j];
			     rs[j]=rs[j+1];
                 rs[j+1]=t;
				 t=times[j];
			     times[j]=times[j+1];
                 times[j+1]=t;
			 }
}
void main() 
{    int i,n,h,rs[20],a[20],times[20];
     cin>>n;
     for(i=0;i<n;i++)
		 cin>>a[i];	 
	 cout<<getSet(rs,a,n)<<'\n';
	 h=getTimes(rs,a,times,n);
	 print(rs,times,h);
	 cout<<'\n';
	 getDrop(rs,a,times,n);
	 print(rs,times,h);
}
//10 2 2 2 2 1 1 1 6 6 4