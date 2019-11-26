#include<iostream>
using namespace std;
  int F(long i,long j)
{long n,sum=0,k,t,s;
  for(n=i;n<=j;n++)
  {k=n/100;t=n/10%10;s=n%10;
  if(n==(k*k*k+t*t*t+s*s*s))  
  cout<<n<<'\t';

  }
	  
}
int main()
{long i,j;
cin>>i>>j;
if(i<j)
F(i,j);
else cout<<false;
}

