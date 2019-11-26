#include<iostream.h>
void main()
{    int l,h,i,j;
     cin>>l>>h;
	 for(j=0;j<h;j++)
	 {   for(i=0;i<j;i++)
	         cout<<" ";
		 for(i=0;i<l;i++)
	         cout<<"*";
		 cout<<'\n';
	 } 
     cout<<'\n';
	 for(j=0;j<h;j++)
	 {   for(i=0;i<h-j-1;i++)
	         cout<<" ";
		 for(i=0;i<l;i++)
	         cout<<"*";
		 cout<<'\n';
	 } 
}