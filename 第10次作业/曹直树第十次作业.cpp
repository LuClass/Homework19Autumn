//第二题
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void getRandom(int data[],int n)
{srand(time(NULL));
for(int i=0;i<n;i++)
data[i]=rand()%100;
}

int getMax(const int a[],int n)
{int i,t=0;
for(i=1;i<n-1;i++)
if(a[t]<a[i])\
t=i;
else continue;
cout<<"最大值为"<<t<<endl;
cout<<"下标为"<<a[t]<<endl;
}

int main(void)
{int n,i,a[n];cin>>n;cout<<"数组a为"; 
getRandom(a,n);
for(i=0;i<=n-1;i++)
{cout<<a[i]<<'\t';
cout<<endl;}
}
//第五题
#include <iostream>
using namespace std;

int S(long n)//判断是否为素数 
{int i;
for(i=2;i<n-1;i++)
if(n%i==0)
{return 1;break;}
else continue;
}

int C(long n)//质因数 
{int i;
for(i=2;i<=n;i++)
if(n%i==0)
n=i;
return n;
}

int T(long n)
{int s=0;
while(n!=0)
{s+=n%10;
n/=10;
}
return s;
}

int W(int n)
{int sum=0;
for(;n!=C(n);n/=C(n))
if(n%C(n)==0)
sum+=T(C(n));
return sum+T(C(n));
}

bool isSmith(int n)
{
if(S(n)&&(T(n)==W(n)))
return 1;
else return 0;
}

int main(void)
{int n;cin>>n;
if(isSmith(n))
cout<<"YES!"<<endl;
else cout<<"NO!"<<endl;

long long j;
for(j=4937775;j>4937774;j++)
if(isSmith(j))
{cout<<j;break;}
}
//第十题
#include<iostream>
using namespace std;
int main()
{int i,j,s=21,k=0,a[21];
for (i=0;i<21;i++)
a[i]=i+1;
while(1)
  {
        for (i=0;i<21;i++)
        if (a[i]!=0)
       {   k++;
            if (k%5==0)
            {a[i]=0;s--;}
       }
        if(s==1) break;
  }
   for (i=0;i<21;i++)
   if (a[i]!=0)
   cout<<i+1;
}