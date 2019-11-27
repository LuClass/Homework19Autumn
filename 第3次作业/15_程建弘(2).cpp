#include<iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,ans,root;
	cin>>a>>b>>c;
	root=b*b-4*a*c;
	if(root>0){
		double x1=(-b/(2*a))+(sqrt(root))/(2*a);
		double x2=(-b/(2*a))-(sqrt(root))/(2*a);
		cout<<"方程两不同根为：x1="<<x1<<"  x2="<<x2<<endl;
	}
	else if(root==0){
		double x1=(-b/(2*a))+(sqrt(root))/(2*a);
		cout<<"方程两相同根为：x1=x2="<<x1<<endl;
	}
	else{
		cout<<"方程无实数根"<<endl;
	}
}
