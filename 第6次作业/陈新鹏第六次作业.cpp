//第二题
#include<iostream>
using namespace std;
int  T(int n)
{
    int i=1,s1=1;
for(i=1;i<=n;i++)
s1*=i;
    return s1;
}
int main(void)
{int n,k;
cin>>n;cin>>k;
cout<<T(n)/(T(k)*T(n-k));
   return 0;
}
//第四题
#include <iostream>
using namespace std;
int C(int n)
{int i;
for(i=2;i<n;i++)
if (n%i==0)
return 0;
if(i*i>n)
return 1;
}
int main(void)
{for(int n=3;n<=500;n++)
   {if (C(n)&&C(n+2))
   cout<<n<<'~'<<n+2<<"   ";}
    return 0;
}
//第五题
#include<iostream>
using namespace std;
int T(int n)
{int i;
   for(i=2;i<=n;i++)
   if(n%i==0)
  { n=i;}
      return n;
}
int main(void)
{int n;
	cin>>n;
	for(;n!=T(n);n/=T(n))
  if(n%T(n)==0)
   cout<<T(n)<<"*";
   cout<<n;
}

	


