#include <iostream>
#include <math.h>
using namespace std;
struct Result{
	double x1;
	double x2; 
};
Result f(int a,int b,int c){
	Result slo;
	double d=b*b-4*a*c;
	if (d==0){
		slo.x1=-b/(2*a);
		slo.x2=-b/(2*a);
	}
	if (d>0){
	slo.x1=(-b+sqrt(d))/(2*a);
	slo.x2=(-b-sqrt(d))/(2*a);
	}
	return slo;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	Result slo;
	if (b*b-4*a*c<0)
		cout<<"�޽⣡";
	else 
	{
		Result slo=f(a,b,c);
		cout<<"x1="<<slo.x1<<endl;
		cout<<"x2="<<slo.x2;
	}
}
