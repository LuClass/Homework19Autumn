#include<iostream>
using namespace std;
bool sxh(int n)
{if(n<100||n>999)
return false;
int i,j,k;
i=n/100;
j=n/10%10;
k=n%10;
if(n==i*i*i+j*j*j+k*k*k)
return true;
else return false;
}
int main()
{int a,b,c,n=0;
cout<<"请输入两个正整数";
cin>>a>>b;
cout<<"其间水仙花数";
int i=a>b?b:a;
for(;(a>b?b:a)<=i&&i<=(a>b?a:b);i++) 
{if(sxh(i)==1)
{cout<<i<<" ";
n++;
}
}
if(n==0)
cout<<"不存在"<<endl;
return 0;
}
