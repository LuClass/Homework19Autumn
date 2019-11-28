#include<iostream>
#include<math.h>
using namespace std;
struct point{
	int x,y;
}; 
double f(point a,point b)
{
   double d;
   d=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}
int main()
{
	point r,s,t;
	cin>>r.x>>r.y>>s.x>>s.y>>t.x>>t.y;
	double d1,d2,d3;
	d1=f(r,s);
	d2=f(r,t);
	d3=f(t,s);
	if(d1+d2>d3||d2+d3>d1||d1+d3>d2)
	{
		double p;
		p=(d1+d2+d3)/2;
		cout<<"能构成三角形"<<endl;
		cout<<"周长："<<d1+d2+d3<<endl;
		cout<<"面积："<<sqrt(p*(p-d1)*(p-d2)*(p-d3))<<endl;
	}
}
