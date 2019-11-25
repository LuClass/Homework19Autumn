#include<iostream>
#include<math.h>
using namespace std;

struct Point{
	int x, y;
};

struct Trangle{
	int x, y, z;
};

void distanFunc(Point a, Point b){
	cout<<sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))<<endl;	
}

void tranFunc(Trangle t){
	if(t.x+t.y-t.z<=0||t.y+t.z-t.x<=0||t.z+t.x-t.y<=0){
		cout<<"不能构成三角形！";
	}
	else{
		cout<<"周长为："<<t.x+t.y+t.z<<endl;
		double p=(double)(t.x+t.y+t.z)/2;
		cout<<"面积为："<<sqrt(p*(p-t.x)*(p-t.y)*(p-t.z))<<endl;
	}
}
int main(){
	Point a, b;
	cin>>a.x>>a.y;
	cin>>b.x>>b.y;
	distanFunc(a, b);
	Trangle t;
	cin>>t.x>>t.y>>t.z;
	tranFunc(t);
	return 0;
} 
