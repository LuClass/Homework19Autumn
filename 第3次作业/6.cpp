#include<iostream>
#include<math.h>
using namespace std;
int main()
{   double a,b,c,h,x1,x2;
    cin>>a>>b>>c;
    h=b*b-4*a*c;
    if(h<0)
		cout<<"函数无实根"<<endl;
	else
	{   x1=(-b+sqrt(h))/2/a;
	    x2=(-b-sqrt(h))/2/a;
	    if(x1==x2)
			cout<<"函数有一个实根"<<"x="<<x1<<endl;
	    else
		    cout<<"函数有两个实根x1="<<x1<<" x2="<<x2<<endl;
	}
    return 0;
}
