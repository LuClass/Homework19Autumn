#include<iostream.h>
void main()
{    int i,t;
     int a,b,c;
	 for(t=100;t<1000;t++)
	 {   i=t;
		 a=i%10;
	     i/=10;
		 b=i%10;
		 i/=10;
		 c=i%10;
		 if(a*a*a+b*b*b+c*c*c==t)
			 cout<<t<<'\t';
	 }
}