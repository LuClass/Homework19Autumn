(3).
#include <iostream>
using namespace std;
struct Fraction{int a,b
	};
	Fraction *x,*y;
int main ()
{
	int m,n,temp,i,j;
		m=x->a;
	n=x->b;
	if(m==0)
	n=1;
	if(m<0)
	m=-m;
	if(m>n)
	{
		temp=n;
		n=m;
		m=temp;
	}
	i=n;j=m;
	while(j!=0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	x->a=m/i;
	x->b=n/i;
		m=y->a;
	n=y->b;
	if(m==0)
	n=1;
	if(m<0)
	m=-m;
	if(m>n)
	{
		temp=n;
		n=m;
		m=temp;
	}
	i=n;j=m;
	while(j!=0)
	{
		temp=i%j;
		i=j;
		j=temp;
	}
	y->a=m/i;
	y->b=n/i;
	f(*x,*y)
	return 0;
 } 
 void f(*x,*y)
 {
 	if((x->a)==(y->a)&&((x->b)==(y->b)))
 	cout<<"相等";
 	if(double((x->a)/(x->b))>double(((y->a)/(y->b)))
 	cout<<"大于";
	if(double((x->a)/(x->b))<double(((y->a)/(y->b)))
	cout<<"小于";
	cout<<double((x->a)/(x->b))+double(((y->a)/(y->b));
	cout<<double((x->a)/(x->b))-double(((y->a)/(y->b));
	cout<<double((x->a)/(x->b))*double(((y->a)/(y->b));
	cout<<double((x->a)/(x->b))/double(((y->a)/(y->b))<<endl;
 }
 
 (4).
 #include <iostream>
using namespace std;
int main ()
{
	struct Course{
		int num1;
		char a[10];
		enum khfs{
			level,num
		};
	}*p;
	struct StudentScores{
		int num2;
		char name[10];
		int kcbh;
		union khcj{
			p->khfs.level;
			p->khfs.num;
		};
	};
	return 0;
}
