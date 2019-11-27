#include <iostream>
using namespace std;

int maxyue(int a,int b)
{
	int temp,m,n;
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	m=a;n=b;
	while(n!=0)
	{
		temp=m%n;
		m=n;
		n=temp;
	}
	return m;
}

struct Fraction
{
	int a,b;
	Fraction(int x,int y):a(x),b(y)
	{
		if(b==0)
		    throw "denominator is zero";
		if(a==0)
		{
			b=1;
			return;
		}
		int t=maxyue(a,b);
		if(t!=1)
		{
			a/=t;
			b/=t;
		}
	}	
};

void print(Fraction* f)
{
	cout<<f->a<<" / "<<f->b<<endl;
}
	
void judge(Fraction* x,Fraction* y)
{
	if(x!=NULL&&y!=NULL)
	{
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

Fraction sum(Fraction *f1,Fraction *f2)
{
	return Fraction(f1->a*f2->b+f1->b*f2->a,f2->b*f2->b);
}

Fraction miu(Fraction* f1,Fraction* f2)
{
	return Fraction(f1->a*f2->b-f1->b*f2->a,f1->b*f2->b);
}


Fraction mul(Fraction* f1,Fraction* f2)
{
    return Fraction(f1->a*f2->a,f1->b*f2->b);
}

Fraction div(Fraction* f1,Fraction* f2)
{
	return Fraction(f1->a*f2->b,f1->b*f2->a);
}

int main()
{
    int a,b;	
	Fraction f1(a,b),f2(a,b);
 	cin>>f1.a>>f1.b>>f2.a>>f2.b;
 	judge(&f1,&f2);
 	Fraction  f3=sum(&f1,&f2);
 	print(&f3);
 	Fraction  f4=miu(&f1,&f2);
 	print(&f4);
 	Fraction  f5=mul(&f1,&f2);
 	print(&f5);
 	Fraction  f6=div(&f1,&f2);
 	print(&f6);
}
