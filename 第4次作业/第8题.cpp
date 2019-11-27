#include<iostream.h>
#include<math.h>
int fun(int a)
{   int i,j,sum=1;
	for(i=2;i<=sqrt(a);i++)
		for(j=2;j<=a;j++)
			if(i*j==a)
			   sum+=i+j;
	return sum;
}
void main()
{    int a,i,j;
	 cin>>a;
     cout<<a<<"的因子有：";
	 for(i=1;i<=sqrt(a);i++)
		 for(j=1;j<=a;j++)
			 if(i*j==a)
				 cout<<i<<" "<<j<<" ";
	 cout<<'\n'<<"1-100间的完全数有：";
	 for(i=2;i<=100;i++)
		 if(fun(i)==i)
			 cout<<i<<' ';
     cout<<'\n';

}