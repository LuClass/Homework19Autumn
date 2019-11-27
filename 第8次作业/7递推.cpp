#include<iostream.h>
void main()
{    int i,n;
     cin>>n;
	 while(n)
	 {    i=n%10;
	      n=n/10;
		  cout<<i;
	 }
}