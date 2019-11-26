#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a<0)
	a=-a;
	if(a%b==0)
	return b;
	else
	return gcd(b,a%b);
}

int lcm(int a,int b)
{
	return a*b/gcd(a,b);
} 

struct  Fraction{
	int a,b;
};

void simplify(Fraction *f)
{
	int g=gcd(f->a,f->b);
	f->a/=g;
	f->b/=g;
}

void judge(Fraction *m,Fraction *n)
{
	simplify(m);
	simplify(n);
	if(m->a*n->b>n->a*m->b)
	cout<<m->a<<"/"<<m->b<<">"<<n->a<<"/"<<n->b;
	else if(m->a*n->b==n->a*m->b)
	cout<<m->a<<"/"<<m->b<<"="<<n->a<<"/"<<n->b;
	else
	cout<<m->a<<"/"<<m->b<<"<"<<n->a<<"/"<<n->b;
}

Fraction *add(Fraction *m,Fraction *n)
{
	Fraction q;
	q.a=m->a*n->b+n->a*m->b;
	q.b=m->b*n->b;
	Fraction *p1=&q;
	simplify(p1);
	return p1;
}

Fraction *sub(Fraction *m,Fraction *n)
{
	Fraction q;
	q.a=m->a*n->b-n->a*m->b;
	q.b=m->b*n->b;
	Fraction *p2=&q;
	simplify(p2);
	return p2;
}

Fraction *mutiply(Fraction *m,Fraction *n)
{
	Fraction q;
	q.a=m->a*n->a;
	q.b=m->b*n->b;
	Fraction *p3=&q;
	simplify(p3);
	return p3;
}

Fraction *divided(Fraction *m,Fraction *n)
{
	Fraction q;
	q.a=m->a*n->b;
	q.b=m->b*n->a;
	Fraction *p4=&q;
	simplify(p4);
	return p4;
}

int main()
{
	cout<<"请分别输入两个分数的分子分母：";
	Fraction x,y;
	cin>>x.a>>x.b>>y.a>>y.b; 
	judge(&x,&y);
	cout<<endl;
	cout<<"加："<<add(&x,&y)->a<<"/"<<add(&x,&y)->b<<endl;
	cout<<"减："<<sub(&x,&y)->a<<"/"<<sub(&x,&y)->b<<endl;
	cout<<"乘："<<mutiply(&x,&y)->a<<"/"<<mutiply(&x,&y)->b<<endl;
	cout<<"除："<<divided(&x,&y)->a<<"/"<<divided(&x,&y)->b<<endl;
	return 0;
}


