#include<iostream>
#include<math.h>
using namespace std;

struct Point
 {
	 int x,y;
 };

double j(Point a,Point b)
{
	double D;
	D=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return D;
}

 struct triangle
 {
	 Point m,n,t;
 };

int main()
{
      Point m,n,t;
      cin>>m.x>>m.y>>n.x>>n. y>>t.x>>t.y;
      double C,S;
      double g=j(m,n),h=j(m,t),i=j(n,t);
      double p=(g+h+i)/2;
      if((m.x==n.x&&n.x==t.x)||(m.y==n.y&&n.y==t.y))
	    cout<<"not a triangle"<<endl;
      else
	  {
		C=g+h+i;
    	S=sqrt(p*(p-g)*(p-h)*(p-i));
    	cout<<"周长为"<<C<<endl;
		cout<<"面积为"<<S<<endl;
	  }
}

	
   
	
	
