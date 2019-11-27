#include<iostream>
#include<string.h>
using namespace std;
////////////////////////////////////////// 
int gys(int a,int b)
{
	if(a<0)
		a=-a;
	if(a==0)
		return 0;
	for(int n=(a<b?a:b);n>=1;n--)
	{
		if(a%n==0&&b%n==0)
			return n;
	}		
}
int gbs(int a,int b)
{
	if(a<0)
		a=-a;
	if(a==0)
		return 0;
	for(int n=(a>b?a:b);;n++)
	{
		if(n%a==0&&n%b==0)
			return n;
	}		
}
struct Fraction
{
	int a,b;
	Fraction(int a1,int b1)
	{
		int q=gys(a1,b1);
		if(q==0)
		{
			a=0;b=1;
		}
		else
		{
			a=a1/q;b=b1/q;
		}
	}
};

void print(Fraction* f)
{
		cout<<(f->a)<<" / "<<(f->b)<<endl;
}

bool pd(Fraction* f2,Fraction* f3)
{
	return (f2->a==f3->a&&f2->b==f3->b);
}

Fraction jia(Fraction* x,Fraction* y)
{
	int p=gbs(x->b,y->b);
	return Fraction(x->a*(p/x->b)+y->a*(p/y->b),p);
}
Fraction jian(Fraction* x,Fraction* y)
{
	int p=gbs(x->b,y->b);
	return Fraction(x->a*(p/x->b)-y->a*(p/y->b),p);
}

Fraction cheng(Fraction* x,Fraction* y)
{
	return Fraction(x->a*y->a,x->b*y->b);
}

Fraction chu(Fraction* x,Fraction* y)
{
	return Fraction(x->a*y->b,x->b*y->a);
}
//////////////////////////////////////////////////
enum type{percent,level};

union mark
{
	int n;
	char ch;
};

struct Course
{
	char num[20];
	char course_name[10];
	type t;		
}; 

struct grade
{
	char xh[20];
	char name[10];
	Course c1;
	mark m;
	grade(char cc[],char nn[],char bianhao[],type t,char x)
	{
		strcpy(xh,cc);
		strcpy(name,nn);
		strcpy(c1.num,bianhao);
		c1.t=t;
		if(t==0)
			m.n=(int)x;
		else
			m.ch=x;
	}	
};

void print_grade(grade stu)
{
	cout<<stu.xh<<" "<<stu.name<<" "<<stu.c1.num<<" "<<stu.c1.t<<" ";
	if(stu.c1.t==0)
		cout<<stu.m.n<<endl;
	else
		cout<<stu.m.ch<<endl;
		
}

int main(void)
{
	cout<<"p174 t14 (3):"<<endl<<endl;
	
	Fraction f1(1,2),f2(-1,5),f3(-6,15),f4(-2,5),f(2,3);
	print(&f1);
	print(&f2);
	print(&f3);
	cout<<pd(&f3,&f4)<<endl;
	Fraction  f5=cheng(&f1,&f2);
	print(&f5);
	Fraction  f6=chu(&f1,&f);
	print(&f6);
	Fraction  f7=jia(&f3,&f4);
	print(&f7);
	Fraction  f8=jian(&f1,&f);
	print(&f8);
	
	cout<<endl<<"p174 t14 (4):"<<endl<<endl;
	grade g1("919106840526","Αυξ£½έ","111",level,'A');
	grade g2("919106840528","pa","222",percent,99);
	print_grade(g1);
	print_grade(g2);
	return 0;
}
