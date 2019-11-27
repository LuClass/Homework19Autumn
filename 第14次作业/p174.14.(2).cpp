#include<iostream>
#include<cmath>
using namespace std;
struct Point{
	int x;
	int y;
};
double distance (struct Point A,struct Point B){
	double a;
	a=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	return a;
}
struct triangle{
	struct Point A;
	struct Point B;
	struct Point C;
};
bool abc(struct triangle X){
	double distance (struct Point A,struct Point B);
	if(distance(X.A,X.B)+distance(X.A,X.C)>distance(X.B,X.C)&&distance(X.A,X.B)+distance(X.B,X.C)>distance(X.A,X.C)&&distance(X.A,X.C)+distance(X.B,X.C)>distance(X.A,X.B))
		return true;
	else 
		return false;
}
double area(struct triangle X){
	double distance (struct Point A,struct Point B);
	double s=1.0/2*(distance(X.A,X.B)+distance(X.B,X.C)+distance(X.A,X.C));
	return sqrt(s*(s-distance(X.A,X.B))*(s-distance(X.B,X.C))*(s-distance(X.A,X.C)));
}
int main(){
	cout<<"在下面三行中分别输入三个点的坐标"<<endl;
	triangle X;
	cin>>X.A.x>>X.A.y;
	cin>>X.B.x>>X.B.y;
	cin>>X.C.x>>X.C.y;
	double distance (struct Point A,struct Point B);
	if(abc(X)){
		cout<<"perimeter = "<<distance(X.A,X.B)+distance(X.A,X.C)+distance(X.B,X.C)<<endl;
		cout<<"area = "<<area(X);
	}
	else
		cout<<"It's not a triangle.";
	
}
