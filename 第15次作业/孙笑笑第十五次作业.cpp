#include<iostream>
using namespace std;
struct Fraction{
	int a,b;
};
void change(Fraction *x){
	for(int i=2;i<=x->a;i++){
		if(x->a%i==0&&x->b%i==0){
			x->a=x->a/i;
			x->b=x->b/i;
		}
	}
	cout<<x->a<<"/"<<x->b<<endl;
}

void judge(Fraction *x,Fraction *y){
	if(x!=NULL&&y!=NULL){
		double c,d;
		c=(double)x->a/x->b;
		d=(double)y->a/y->b;
		if(c>d)
		cout<<x->a<<"/"<<x->b<<">"<<y->a<<"/"<<y->b<<endl;
		else if(c<d)
		cout<<y->a<<"/"<<y->b<<">"<<x->a<<"/"<<x->b<<endl;
		else
		cout<<y->a<<"/"<<y->b<<"same"<<endl;
	}
}
double plu(Fraction *x,Fraction *y){
	double c,d;
		c=(double)x->a/x->b;
		d=(double)y->a/y->b;
		return c+d;
}
double min(Fraction *x,Fraction *y){
	double c,d;
		c=(double)x->a/x->b;
		d=(double)y->a/y->b;
		return c-d;
}
double mul(Fraction *x,Fraction *y){
	double c,d;
		c=(double)x->a/x->b;
		d=(double)y->a/y->b;
		return c*d;
}
double div(Fraction *x,Fraction *y){
	double c,d;
		c=(double)x->a/x->b;
		d=(double)y->a/y->b;
		return c/d;
}
int main(){
	Fraction m,n;
