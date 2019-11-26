#include<iostream>
using namespace std;

int F(long n)
{long i,j,t,k=0;
for(i=1;i>=1;i++)
  {t=n%10;n/=10;k++;
  if(n==0)
  break;
  }
  return k;
}

int main(void)
{long n,i,j,k,s,t,m,y,sum=1;
  cin>>n;
 for(j=1;j<=F(n)/2;)
 {
  { s=n;m=n;t=n;y=n;
   for(i=1;i<=F(n)-j;i++)
    {s=n/10;}t=s%10;
   for(k=1;k<=j;k++)
    {m=n/10;}y=m%10;}
	 if(t==y) 
     cout<<"YES"<<endl;
    
 }
 
}
