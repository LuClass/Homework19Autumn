#include<math.h>
#include<iostream>
using namespace std;
struct jie {
   int n;
   double delta,x1,x2;
};
jie f(int a,int b,int c)
{jie s;
if(a==0&&b==0)
{s.n=0;
s.x1=0;
s.x2=0;
return s;
}
if(a==0&&b!=0)
{s.n=1;
s.x1=-c/b*1.0;
s.x2=-c/b*1.0;
return s;
}
else{s.delta=sqrt(b*b-4*a*c);
if(b*b-4*a*c>0)s.n=2;
if(b*b-4*a*c==0)s.n=1;
if(b*b-4*a*c<0)s.n=0;
s.x1=(-b+sqrt(b*b-4*a*c))/(2.0*a);
s.x2=(-b-sqrt(b*b-4*a*c))/(2.0*a);
return s;
}

}
int main()
{int a,b,c;
cin>>a>>b>>c;
jie s=f(a,b,c);
if(a==0)
{cout<<"解的个数为"<<s.n<<endl;
cout<<"第一个解为"<<s.x1<<" ";
cout<<"第二个解为"<<s.x2;
return 0;
}
if(b*b-4*a*c>=0){cout<<"delta="<<s.delta;
cout<<"解的个数为"<<s.n<<endl;
cout<<"第一个解为"<<s.x1<<" ";
cout<<"第二个解为"<<s.x2;
}

else cout<<"delta不存在,方程无解";
return 0;

}
