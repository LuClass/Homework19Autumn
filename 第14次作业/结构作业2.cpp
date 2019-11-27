#include <iostream>
#include <math.h>
using namespace std;
struct Point{
	int x;int y;
};
struct triangle{
	Point A;
	Point B;
	Point C;
};
double f(Point a,Point b){
	double dis;
	dis=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return dis;
}
bool judge(triangle a){
	if ((a.A.x==a.B.x==a.C.x)||(a.A.y==a.B.y==a.C.y))
	return false;
	return true;
}
int main(){
	Point a,b;
	triangle m;
	double C,S;
	cin>>a.x>>a.y>>b.x>>b.y;
	cin>>m.A.x>>m.A.y>>m.B.x>>m.B.y>>m.C.x>>m.C.y;
	cout<<"The length is "<<f(a,b)<<endl; 
	if (judge(m)){
	C=f(m.A,m.B)+f(m.A,m.C)+f(m.B,m.C);
	S=sqrt(C*(C-f(m.A,m.B))*(C-f(m.A,m.C))*(C-f(m.C,m.B)));
	cout<<"YES,it is a triangle and its perimeter is "<<C<<endl<<"And its area is "<<S<<endl;}
	else
	cout<<"No such a triangle";
}
