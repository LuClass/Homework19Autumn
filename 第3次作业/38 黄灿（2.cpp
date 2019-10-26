#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c,d,x;
	cout<<"请输入系数啊，a,b,c :"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0){
		cout<<"方程无根"<<endl; 
	}
	else if(d==0){
		cout<<"方程有一个根：";
		x=-b/(2*a);
		cout<<x<<endl; 
	}
	else{
		cout<<"方程有两个根：";
		x=(-b+sqrt(d))/(2*a);
		cout<<x<<'\t';
		x=(-b-sqrt(d))/(2*a);
		cout<<x<<endl;		 
	}
	return 0;
}
