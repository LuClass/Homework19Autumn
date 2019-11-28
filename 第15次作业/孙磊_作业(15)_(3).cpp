#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
//最大公约数
int gcd(int a, int b) {
	if(b > a) swap(a, b);
	if(b==0) return a;
	gcd(b,a%b);
}

struct Fraction {
	int a, b;
};

Fraction input(Fraction *f) {
	cout<<"输入分子和分母，用空格隔开："<<endl;
	cin>>f->a;
	cin>>f->b;
	return *f;
}
Fraction reduce(Fraction *f) {
	if(f->a == 0)
		f->b=1;
	else if(f->a < 0)
		f->a *= -1;
	if(f->b < 0)
		f->b *= -1;
	int g = gcd(f->a, f->b);
	if(g!=1) {
		f->a /= g;
		f->b /= g;
	}
	return *f;
}

void judge(Fraction *f1, Fraction *f2) {
	cout<<"judge\n";
	if(f1->a==f2->a&&f1->b==f2->b)
		cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'='<<'('<<f2->a<<'/'<<f2->b<<')'<<endl;
	else if(f1->a*f2->b - f2->a*f1->b >0)
		cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'>'<<'('<<f2->a<<'/'<<f2->b<<')'<<endl;
	else if(f1->a*f2->b - f2->a*f1->b <0)
		cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'<'<<'('<<f2->a<<'/'<<f2->b<<')'<<endl;
	cout<<endl;
}

void add(Fraction *f1, Fraction *f2) {
	cout<<"add\n";
	Fraction rst1, *rst=&rst1;
	rst->a = f1->a*f2->b + f2->a*f1->b;
	rst->b = f1->b*f2->b;
	reduce(rst);
	cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'+'<<'('<<f2->a<<'/'<<f2->b<<')'<<'='<<'('<<rst->a<<'/'<<rst->b<<')'<<endl<<endl;
}

void sub(Fraction *f1, Fraction *f2) {
	cout<<"sub\n";
	Fraction rst1, *rst=&rst1;
	rst->a = f1->a*f2->b - f2->a*f1->b;
	rst->b = f1->b*f2->b;
	reduce(rst);
	cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'-'<<'('<<f2->a<<'/'<<f2->b<<')'<<'='<<'('<<rst->a<<'/'<<rst->b<<')'<<endl<<endl;
}

void mul(Fraction *f1, Fraction *f2) {
	cout<<"mul\n";
	Fraction rst1, *rst=&rst1;
	rst->a = f1->a*f2->a;
	rst->b = f1->b*f2->b;
	reduce(rst);
	cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'*'<<'('<<f2->a<<'/'<<f2->b<<')'<<'='<<'('<<rst->a<<'/'<<rst->b<<')'<<endl<<endl;
}

void div(Fraction *f1, Fraction *f2) {
	cout<<"div\n";
	Fraction rst1, *rst=&rst1;
	rst->a = f1->a*f2->b;
	rst->b = f1->b*f2->a;
	reduce(rst);
	cout<<'('<<f1->a<<'/'<<f1->b<<')'<<'/'<<'('<<f2->a<<'/'<<f2->b<<')'<<'='<<'('<<rst->a<<'/'<<rst->b<<')'<<endl<<endl;
}

int main() {
	Fraction m, n, *x=&m, *y=&n;
	input(x);
	reduce(x);
	input(y);
	reduce(y);
	judge(x, y);
	add(x, y);
	sub(x,y);
	mul(x,y);
	div(x,y);

	return 0;
}
