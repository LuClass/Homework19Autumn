/*
(1)编写一个函数， 求解一元二次方程 ax2+bx+c。要求函数形参为 f(int a,int b,int c)， 设计一个结构作为该
函数返回类型，让函数调用方按自己需要输出结果，而函数体中无需输出结果。
*/ 
#include<iostream> 
#include<math.h>
using namespace std;
struct result{
	float x1,x2;
	int type;
}; 
result f(int a,int b,int c){
	result m;
	if(b*b-4*a*c<0){
		m.type=1;
	}
	else if(b*b-4*a*c==0){
		m.type=2;
	}
	else{
		m.type=3;
	}
	double delta;
	delta=sqrt((double)b*b-4*a*c);
	m.x1=(0.5/a)*(-b+delta);
	m.x2=(0.5/a)*(-b-delta);
	return m;
}
int main(){
	cout<<"求解一元二次方程 ax2+bx+c,请输入a,b,c"<<endl;
	int a,b,c;
	cin>>a>>b>>c;
	result s=f(a,b,c);
	if(s.type==1){
		cout<<"方程无实数根"<<endl; 
	}
	else if(s.type==2){
		cout<<"x1=x2= "<<s.x1<<endl; 
	}
	else{
		cout<<"x1="<<s.x1<<"  x2="<<s.x2<<endl; 
	}
}
