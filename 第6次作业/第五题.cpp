#include<iostream.h>
int fun(int n)
{   int i;
    for(i=2;i<=n/2;i++)
		if(n%i==0)
			return 1;
	return 0;
}
void main()
{    int n,i;
     cin>>n;
	 cout<<n<<"=";
	 if(n==1)
		 cout<<n;
	 for(i=2;i<=n;i++)
	 	 if(n%i==0)
		 {   cout<<i;
			 if(fun(n))//ÅÐ¶ÏÊÇ·ñÊä³ö³ËºÅ
		     cout<<"*";
		     n=n/i;
			 i=1;				 
		 }
}