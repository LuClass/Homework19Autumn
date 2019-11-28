#include <iostream>
using namespace std;
int main()
{
 int a,c;
 cin>>c;
 a=c;
 int b=0;
 while(a)
{
 b=a%10+10*b;
 a=a/10;
}
 if(b==c)
 cout<<"是回文数";
 else cout<<"不是回文数" ;
}
