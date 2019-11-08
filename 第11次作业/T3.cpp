#include<iostream>
using namespace std;
bool wqs(int x)
{int sum=0;
for(int i=1;i<x;i++)
{if(x%i==0)
sum+=i;
}
if(sum==x)
return true;
else return false;
}
int main()
{int a,b,c,n=0;
cout<<"请输入两个正整数";
cin>>a>>b;
cout<<"其间完全数";
for(int i=a>b?b:a;(a>b?b:a)<=i&&i<=(a>b?a:b);i++) 
{if(wqs(i)==1)
cout<<i<<" ";
n++;
}
if(n==0)
cout<<"不存在";
return 0;

}
