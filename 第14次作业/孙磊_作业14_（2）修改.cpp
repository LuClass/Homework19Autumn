#include<iostream>
#include<math.h>
using namespace std;

struct Point{
	int x, y;
};

struct Trangle{
	Point a, b, c;	//类型Point 
};

double distanFunc(Point a, Point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));	
}

void tranFunc(Trangle t){
	double x, y, z;
	x=distanFunc(t.a, t.b);//cout<<x<<endl;		//计算三边长度 
	y=distanFunc(t.b, t.c);//cout<<y<<endl; 
	z=distanFunc(t.a, t.c);//cout<<z<<endl;
	if(x+y-z<=0||y+z-x<=0||z+x-y<=0){
		cout<<"不能构成三角形！";
	}
	else{
		cout<<"周长为："<<x+y+z<<endl;
		double p=(double)(x+y+z)/2;
		cout<<"面积为："<<sqrt(p*(p-x)*(p-y)*(p-z))<<endl;
	}
}

//测试 
int main(){
	Point a, b;	
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;	//输入两个点坐标 
	cout<<distanFunc(a, b)<<endl;
	Trangle t;
	cin>>t.a.x>>t.a.y;
	cin>>t.b.x>>t.b.y;	//输入三个点坐标 
	cin>>t.c.x>>t.c.y;
	tranFunc(t);
	return 0;
} 
