#include <iostream>
using namespace std;
#include <math.h>
int f(int a,int b, int c){
	int s;
	s=(a+b+c)/2;
	return s;
}
int main (){
	int area,a,b,c;
	cin>>a>>b>>c;
	area=sqrt(f(a,b,c)*(f(a,b,c)-a)*(f(a,b,c)-b)*(f(a,b,c)-c));
	cout<<area;
	return 0;
}
#include <iostream>
using namespace std;
#include <math.h>
#define S (a+b+c)/2
int main (){
	int area,a,b,c;
	cin>>a>>b>>c;
	area=sqrt(S*(S-a)*(S-b)*(S-c));
	cout<<area;
	return 0;
}

