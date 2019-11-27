#include <math.h>
#include <iostream>
using namespace std;
struct Point{
	double x1;
	double x2;
            };
 double Distance(Point a,Point b){
 	return sqrt((a.x1-b.x1)*(a.x1-b.x1)+(a.x2-b.x2)*(a.x2-b.x2));
 }
 struct sanjiao{
 	Point a;
 	Point b;
 	Point c;
 };
 double cosa(sanjiao A){
 	double x,y,z;
 	x=Distance(A.b,A.c);
 	y=Distance(A.a,A.c);
 	z=Distance(A.a,A.b);
 	return (y*y+z*z-x*x)/2*y*z;
 }
 int main (){
 	sanjiao A;
 	cin>>A.a.x1>>A.a.x2>>A.b.x1>>A.b.x2>>A.c.x1>>A.c.x2;
 	double c,s,x,y,z;
 	x=Distance(A.b,A.c);
 	y=Distance(A.a,A.c);
 	z=Distance(A.a,A.b);
 	if(x+y>z&&x-y<z&&y-x<z){
 		c=x+y+z;
 		s=0.5*y*z*sqrt(1-cosa(A)*cosa(A));
 		cout<<"c="<<c<<endl;
 		cout<<"s="<<s<<endl;
 	}
	 else
	 cout<<"无法构成三角形";
	 return 0; 
 }
