#include<iostream.h>
#include<math.h>
struct Point
{   int x,y; 
};
struct tri
{   Point a,b,c;   
};
double distance(Point a,Point b)
{   double d;
    d=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));//
	return d;
}
void f(tri test)
{    double p,x1,x2,x3;
     p=(distance(test.a,test.b)+distance(test.a,test.c)+distance(test.b,test.c))/2;
	 x1=distance(test.a,test.b);
	 x2=distance(test.a,test.c);
	 x3=distance(test.b,test.c);
	 if(sqrt(p*(p-x1)*(p-x2)*(p-x3))==0)
		 cout<<"无法构成三角形"<<endl;
     else
		 cout<<"可以构成三角形"<<'\n'<<"周长="<<x1+x2+x3<<" 面积="<<sqrt(p*(p-x1)*(p-x2)*(p-x3))<<endl;
}
void main()
{    tri test;
     while(cin>>test.a.x>>test.a.y>>test.b.x>>test.b.y>>test.c.x>>test.c.y)
	 {   f(test);
	 }	 
}