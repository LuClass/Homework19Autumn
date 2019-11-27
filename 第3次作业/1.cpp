#include<iostream>
using namespace std;
int  main()
{    int n,i,k,a[100];
     cin>>n;
     if(n<0)
	 {  cout<<'-';
	    n=-n;
	 }
	 i=0;
	 while(n>0)
	 {    a[i]=n%2;
	      n=n/2;
          i++;		  
	 }
	 for(--i;i>=0;i--)
	     cout<<a[i];
	 return 0;
}