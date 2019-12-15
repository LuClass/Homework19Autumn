#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float area(float a,float b,float c);
	float x,y,z;
	cin>>x>>y>>z;
	cout<<area(x,y,z);
} 
float area(float a,float b,float c){
	float s;
	s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
