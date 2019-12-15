#include <iostream>
#include <math.h>
#define AREA(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c)) 
using namespace std;
int main (){
	float s,a,b,c;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<AREA(s,a,b,c)<<endl;
	return 0;
}
