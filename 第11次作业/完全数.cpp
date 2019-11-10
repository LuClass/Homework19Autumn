#include<iostream.h>
#include<math.h>
void main()
{    int i,j,k,x,y,sum;
     cin>>x>>y;
	 for(i=x;i<=y;i++)
     {   sum=1;
	     k=i;
		 for(j=2;j<=sqrt(k);j++)
		     if(k%j==0)
			     sum+=j+k/j;
		 if(i==sum&&i!=1)
			 cout<<i<<'\t';
	 }
}