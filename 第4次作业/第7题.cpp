#include<iostream.h>
void main()
{    int a=2,b=3,i,t,n;
     cout<<"第1项: 1/2"<<'\n';
     for(i=0;i<19;i++)
	 {   cout<<"第"<<i+2<<"项: "<<b<<"/"<<a<<'\n';
	     t=a+b;
		 a=b;
		 b=t;
	 }    
}