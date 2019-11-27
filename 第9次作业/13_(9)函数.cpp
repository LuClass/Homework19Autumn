#include<iostream>
#include<math.h>
using namespace std;

double s(double a,double b,double c){
	return (a+b+c)/2;
}

double area(double s,double a,double b,double c){
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	cout<<area(s(a,b,c),a,b,c);
}
