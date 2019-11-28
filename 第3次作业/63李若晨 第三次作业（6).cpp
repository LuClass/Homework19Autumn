#include<iostream>
#include<math.h>
using namespace std;
int main(void){
	float a,b,c,m,x,x1,x2;
	cin>>a>>b>>c;
	m=b*b-4*a*c;
	if(m<0)
	{
	cout<<"no real root";}
	else  if(m==0){ 
	x=-b/(2*a);
	cout<<x<<endl;}
	else{
    x1=(-b+sqrt(m))/(2*a);
	x2=(-b-sqrt(m))/(2*a);
	cout<<x1<<' '<<x2<<endl;}
}
