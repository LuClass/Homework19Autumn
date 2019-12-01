#include<iostream.h>
void main()
{    int a,b,num1,num2,t;
     cin>>a>>b;
	 num1=a>b?a:b;
	 num2=a>b?b:a;
	 cout<<num1<<'\t'<<num2<<'\t';
     while(num2!=0)
	 {   t=num1%num2;
	     num1=num2;
		 num2=t;		 
	 }
	 cout<<num1;

}