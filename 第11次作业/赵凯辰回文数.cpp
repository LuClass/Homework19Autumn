#include<iostream.h>
void main()
{    int a[20],i=0,j,x,n;
     cin>>x;
	 n=x;
	 if(n<0)
		 n=-n;
	 while(n)
	 {   a[i++]=n%10;
	     n/=10;
	 }
	 for(j=0;j<i/2;j++)
		 if(a[j]!=a[i-j-1])
		 {	 cout<<x<<"不是回文数";
			 break;
		 }	 
     if(j>=i/2)
		 cout<<x<<"是回文数";
}