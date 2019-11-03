#include<iostream>
#include"max28.cpp"
#include"hex28.cpp"
using namespace std;
int main()
{int a,b,c;
cin>>a>>b;
c=max(a,b);
toHex(c);
return 0;
 } 
