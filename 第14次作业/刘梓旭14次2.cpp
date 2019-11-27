#include<iostream>
#include<math.h>
using namespace std;
struct Point{int x;int y;};
struct sanjiaoxing{
	Point a;
	Point b;
	Point c;
	double s,C,tf;
};
double dis(Point a,Point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
 sanjiaoxing issjx(Point a,Point b,	Point c)
 { sanjiaoxing m;
 m.a=a;
 m.b=b;
 m.c=c;
 if(dis(a,b)+dis(b,c)>dis(a,c)&&dis(a,b)+dis(a,c)>dis(b,c)&&dis(b,c)+dis(a,c)>dis(a,b))
 m.tf=1;
 else m.tf=0;
 if(m.tf)
 {m.C=dis(a,b)+dis(b,c)+dis(a,c);
 double s1=m.C/2;
 m.s=sqrt(s1*(s1-dis(a,b))*(s1-dis(b,c))*(s1-dis(a,c)));
 }
 return m;
 };
 
 
 
 

int main()
{Point a,b,c;
cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
sanjiaoxing m=issjx(a,b,c);
if(m.tf)
cout<<"can be a triangle"<<" C="<<m.C<<" S="<<m.s<<endl;
else cout<<"can't be a triangle";
return 0;

}
