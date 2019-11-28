#include<iostream.h>
void main()
{    int a,b,c,i,j;
     for(i=2;i<=500;i++)
	 {   for(j=2;j<i;j++)
	 {      if (i%j==0)
	         break;
	 }
	    if (j==i)
		{   for(a=2;a<i+2;a++)
		{   if((i+2)%a==0)
		     break;
		}
		}
		if(a==i+2)
		{  cout<<i<<'\t'<<i+2<<'\n';
		}
	 }
}