#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct QiuGen{
	double x1,x2;
	string s;
	int judge;
};

QiuGen f(int a,int b, int c){
	QiuGen q;
	int d=b*b-4*a*c;
	if(d>0){
		q.judge=2;
		q.x1=(-b+sqrt(d))/2*a;
		q.x2=(-b-sqrt(d))/2*a;
		q.s="函数有两个不同实根！"; 
	}

	else if(d==0){
		q.judge=1;
		q.x1=q.x2=(-b+sqrt(d))/2*a;
		q.s="函数有一个实根！";
	}
	
	else{
		q.judge=0;
		q.s="函数无实根！"; 
	}
	
	return q;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	QiuGen q=f(a,b,c);
	if(q.judge==0||q.judge==1||q.judge==2)
	cout<<q.s<<endl;
	if(q.judge==1||q.judge==2)
	cout<<"x1 = "<<q.x1<<endl;
	if(q.judge==2)
	cout<<"x2 = "<<q.x2<<endl;
	return 0;
	
} 
