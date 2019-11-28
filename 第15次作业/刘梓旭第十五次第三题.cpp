#include<iostream>
#include<string.h>
using namespace std;
int zdgys(int a,int b)
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
 int zxgbs(int a,int b)
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
struct Fraction{int a,b;
Fraction(int m,int n)
   {if(zdgys(m,n)==0)
   a=0,b=1;
   else
   a=m/zdgys(m,n),b=n/zdgys(m,n);
   }
};
void shuchu(Fraction* f)
{cout<<f->a<<"/"<<f->b<<endl;
}
bool pandeng(Fraction* f1,Fraction* f2)
{if((f1->a)==(f2->a)&&(f1->b)==(f2->b))
return 1;
else return 0;
}
Fraction jia(Fraction* x,Fraction* y)
 {
 	int p=zxgbs(x->b,y->b);
 	return Fraction(x->a*(p/x->b)+y->a*(p/y->b),p);
 }
Fraction jian(Fraction* x,Fraction* y)
 {
 	int p=zxgbs(x->b,y->b);
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
 int main()
 {Fraction f1(2,3),f2(-4,12);
 shuchu(&f1);
 shuchu(&f2);
 cout<<pandeng(&f1,&f2)<<endl;
 Fraction f3=jia(&f1,&f2);
 shuchu(&f3);
 Fraction f4=jian(&f1,&f2);
 shuchu(&f4);
 Fraction f5=cheng(&f1,&f2);
 shuchu(&f5);
 Fraction f6=chu(&f1,&f2);
 shuchu(&f6);
 return 0;
 }
 
