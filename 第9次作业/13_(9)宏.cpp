#include<iostream>
#include<math.h>
using namespace std;

#define s(a,b,c) (a+b+c)/2
#define area(s,a,b,c) sqrt(s*(s-a)*(s-b)*(s-c))

int main(void){
	double a,b,c;
	
	cin>>a>>b>>c;
	cout<<area(s(a,b,c),a,b,c);
	return 0;
} 
