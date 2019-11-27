#include<iostream>
#include<math.h>
using namespace std;
struct Point{int x,y;};
double len(int x1,int x2,int y1,int y2){
    double len;
	len=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
 	return len;	
}
struct tri{
 	Point a;
 	Point b;
 	Point c;
 };
bool triangle(double x,double y,double z)
{
 	if(x+y<=z||x+z<=y||y+z<=x)
 	return false;
 	else
	return true;
}

	int main(){
 	Point a={0,0};
  	Point b={3,4};
  	Point c={3,0};
  	double s1=len(a.x,b.x,a.y,b.y);
  	double s2=len(a.x,c.x,a.y,c.y);
  	double s3=len(b.x,c.x,b.y,c.y);
  	cout<<s1<<' '<<s2<<' '<<s3<<endl;
  	cout<<boolalpha<<triangle(s1,s2,s3)<<endl;
  	double p=s1+s2+s3;
  	cout<<"周长为："<<p<<endl; 
	double m=p/2;
	double area=sqrt(m*(m-s1)*(m-s2)*(m-s3));
  	cout<<"面积为："<<area; 
}
