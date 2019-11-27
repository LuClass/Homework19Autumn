using namespace std;
#include <iostream>
#include <math.h>
int sum(int n)
{
     int res=0;
     while(n!=0)
     {
          res=res+pow(n%10,3);
          n=n/10;
     }
     return res;
}
int main()
{
     int i,j,a;
     cin>>i>>j;
     for(int k=i;k<=j;k++)
     {
          if(k==sum(k))
          {
               a=k;
               cout<<a<<endl;
          }
     }
     return 0;
}
