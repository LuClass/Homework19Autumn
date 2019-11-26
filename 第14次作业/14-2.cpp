#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

struct Point{
	int x,y;
};

struct Triangle{
	double a,b,c,s;
};

double dis(Point a,Point b){
	int dx,dy;
	dx=abs(a.x-b.x);
	dy=abs(a.y-b.y);
	return sqrt(dx*dx+dy*dy);
}

int main(){
	Point p1,p2;
	Triangle t;
	double len,area;
	cin>>p1.x>>p1.y>>p2.x>>p2.y;
	cin>>t.a>>t.b>>t.c;
	cout<<dis(p1,p2)<<endl;
	if(t.a+t.b<=t.c || t.a+t.c<=t.b || t.b+t.c<=t.a){
		cout<<"cannot";
		return 0;
	}
	len=t.a+t.b+t.c;
	t.s=(t.a+t.b+t.c)/2;
	area=sqrt(t.s*(t.s-t.a)*(t.s-t.b)*(t.s-t.c));
	cout<<"L="<<len<<endl<<"S="<<area<<endl;
	return 0;
}

