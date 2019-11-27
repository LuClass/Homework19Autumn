#include<iostream.h>
void fun(int n)
{    if(n==0)
        return;
	 cout<<n%10;
     fun(n/10);
}
void main()
{    int n;
     cin>>n;
	 fun(n);
}