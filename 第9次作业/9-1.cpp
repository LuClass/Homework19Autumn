#include<iostream>
#include<math.h>

using namespace std;

void area(double a,double b,double c){
	double s=(a+b+c)/2;
	double ar=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<ar;
}

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if((a+b)<=c||(a+c)<=b||(b+c)<=a){
		cout<<"input error";
		return 0;
	}
	area(a,b,c);
	return 0;
}
