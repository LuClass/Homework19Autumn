#include <iostream>
#include <math.h>
using namespace std;
int f(int a,int b,int c){
	int s,d;
	s=(a+b+c)/2;
	d=sqrt(s*(s-a)*(s-b)*(s-c));
	return d;
}
int main(){
	int area,a,b,c,d,s;
	cout<<"分别输入a,b,c的值"<<endl;
	cin>>a>>b>>c;
	cout<<"面积为"<<f(a,b,c)<<endl; 
}
