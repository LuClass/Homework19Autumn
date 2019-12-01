#include <iostream>
#include <iomanip>

using  namespace std;

int main()
{
int a;
int j=31,k;
unsigned int i=2147483648;
cin>>a;

while(j>=0)
{
k=a&i;
cout<<(k>>j--)<<" ";
i>>=1;
  }

}



#include <iostream>
#include  <math.h>
using namespace std;
int main (void){
double a,b,c,x,y,r;
cin>>a;cout<<"a="<<a<<endl;
cin>>b;cout<<"b="<<b<<endl;
cin>>c;cout<<"c="<<c<<endl;
r=b*b-4.0*a*c;
x=(-b+sqrt(r))/(2.0*a);
y=(-b-sqrt(r))/(2.0*a);
        if(r>0)
             cout<<"有两个根"<<"x1="<<x<<" "<<"x2="<<y;
         else
               if(r==0)
                    cout<<"有一个根="<<x;
               else 
                    cout<<"无根";
return 0;
}