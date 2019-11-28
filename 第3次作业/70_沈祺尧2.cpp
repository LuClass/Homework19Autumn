//11.1 
using namespace std;
#include <iostream>
int main(void)
{int x,y,a[32];
   cout<<"请输入一个整数";
   cin>>x; 
if(x>=0)
   {for(int i=0;i<32;i++)
       {a[i]=x%2;
       x=x/2;
       }
    cout<<"其二进制数为";
    for(int i=31;i>=0;i--)
    cout<<a[i];
   }
else y=-x-1;
    {for(int i=0;i<32;i++)
       {a[i]=y%2;
       y=y/2;
       }
    cout<<"其二进制数为";
    for(int i=31;i>=0;i--)
    cout<<!a[i];
    }
    return 0;
}




//11.6
using namespace std;
#include <iostream>
#include <math.h>
int main(void)
{double a,b,c,delta;
   cout<<"二次项系数a=";
   cin>>a;
   cout<<"一次项系数b=";
   cin>>b;
   cout<<"常数项c=";
   cin>>c;
   delta=b*b-4*a*c;   
if(delta<0)
   	cout<<"无根";
else if(delta==0)
       {double x=(-b)/(2*a);
	   cout<<"有且仅有一个根x="<<x;
       } 
     else
       {double x1=(-b+sqrt(delta))/(2*a);
	    double x2=(-b-sqrt(delta))/(2*a);
	    cout<<"该一元二次方程的两个解分别为："<<x1<<' ' <<x2;
	   }
	return 0;
}
