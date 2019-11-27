#include<iostream>
#include<cmath>
using namespace std;
struct Point{
	int x,y;
}; 
struct Triangle{
	Point p1,p2,p3;
	double square,circle;
};
struct value{
	double x1,x2;
};
value f(int a,int b,int c);
char toX(char c);
double juli(Point,Point);
Triangle dosome(Triangle);
bool isTriangle(Triangle);


int main(){
	char z[51];                              //附加题 
	cin.getline(z,50);
	for(int i=0;i<51;i++){
		z[i]=toX(z[i]);
	}
	cout << z << endl;
	int a,b,c;                                     //T1
	cin >>a >>b >>c;
	if(b*b-4*a*c>0)
	cout <<"两个解分别为" << f(a,b,c).x1 << " "<<f(a,b,c).x2<< endl; 
	else if(b*b-4*a*c==0)
	cout << "只有一个解 其值为：" << f(a,b,c).x1<< endl; 
	else if(b*b-4*a*c<0)
	cout << "此方程无解"<< endl; 
	int x,y,m,n,j,k;                               //T2
	cin >> x>>y>>m>>n>>j>>k;
	Point p1={x,y};
	Point p2={m,n};
	Point p3={j,k};
	Triangle t={p1,p2,p3};
	if(isTriangle(t)){
	cout << dosome(t).circle<< endl;
	cout << dosome(t).square<< endl;
	}
	else 
	cout << "此三点无法构成三角形" << endl;
}




char toX(char c){
	if(c>='A'&&c<='Z'){
	return c+32;
	}
	else return c;
}
value f(int a,int b,int c){
	value v1;
	v1.x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	v1.x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	return v1;
}
Triangle dosome(Triangle t){
	double a=juli(t.p1,t.p2);
	double b=juli(t.p2,t.p3);
	double c=juli(t.p1,t.p3);
	double s=(a+b+c)/2;
	t.circle=2*a;
	t.square=sqrt(s*(s-a)*(s-b)*(s-c));
	return t;
}
double juli(Point p1,Point p2){
	double a=p1.x-p2.x;
	double b=p1.y-p2.y;
	return sqrt(a*a+b*b);
}
bool isTriangle(Triangle t){
	double a=juli(t.p1,t.p2);
	double b=juli(t.p2,t.p3);
	double c=juli(t.p1,t.p3);
	if(a+b>c&&a+c>b&&b+c>a)
	return true;
	else 
	return false;
}

