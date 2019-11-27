#include<iostream>
#include<cmath>
#include"hex.h"
#include"max.h"
#define s(a,b,c) (a+b+c)/2
#define AreaDefine(a,b,c)  sqrt(s(a,b,c)*(s(a,b,c)-a)*(s(a,b,c)-b)*(s(a,b,c)-c))
using namespace std;
double Area(double a,double b,double c);
int Max(int a,int b);
void toHex(int a);
int main(){
	double a,b,c;
	cin >> a>>b>> c;
	cout << "以a，b，c为三边的三角形面积为："<< AreaDefine(a,b,c)<< endl;
	cout << "以a，b，c为三边的三角形面积为："<< Area(a,b,c)<< endl;
    int e,f;
    cin>>e>>f;
    int x=Max(e,f);
    toHex(x);
    cout<<endl;
 
}
double Area(double a,double b,double c){
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

