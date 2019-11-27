using namespace std;
#include <iostream>
#include<cmath>
struct Fraction{
	int a;
	int b;
};
int *hua(int a,int b)
{
	int i,c[2];
	if(a==0)
	{
		   b=1;
		   c[0]=a;
		   c[1]=b;
	}
	else if(a>0)
	{
		for(i=a;i>=2;i--)
       {

		  if(a%i==0&&b%i==0)
		  {
			 a=a/i;
			 b=b/i;
		  }
	   }
	   c[0]=a;
	   c[1]=b;
    }
    else
    {
    	a=-a;
    	for(i=a;i>=2;i--)
       {

		  if(a%i==0&&b%i==0)
		  {
			 a=a/i;
			 b=b/i;
		  }
	   }
	   c[0]=-a;
	   c[1]=b;	
	}
	int *pa=&c[0];
	return pa;
}
void max(int z1,int m1,int z2,int m2)
{
    if(m1 == m2)
    {
        if(z1 > z2)
        {
            cout<<z1<<"/"<<m1<<">"<<z2<<"/"<<m2;
        }
        if(z1 < z2)
        {
            cout<<z1<<"/"<<m1<<"<"<<z2<<"/"<<m2;
        } 
        if(z1 == z2)
        {
            cout<<z1<<"/"<<m1<<"="<<z2<<"/"<<m2;
        }      
    }
    else
    {
    	if(z1 * m2 > z2 * m1)
        {
            cout<<z1<<"/"<<m1<<">"<<z2<<"/"<<m2;
        }
        else if(z1 * m2 < z2 * m1)
        {
            cout<<z1<<"/"<<m1<<"<"<<z2<<"/"<<m2;
        }
        else
        {
            cout<<z1<<"/"<<m1<<"="<<z2<<"/"<<m2;
        }
	}
}
void sum(int a,int b,int c,int d)
{
	int *pa;
	pa=hua(a*d+c*b,b*d);
	cout<<*pa<<"/"<<*(pa+1);
}
void cha(int a,int b,int c,int d)
{
	int *pa;
	pa=hua(abs(a*d-c*b),b*d);
	cout<<*pa<<"/"<<*(pa+1);
}
void ji(int a,int b,int c,int d)
{
	int *pa;
	pa=hua(a*c,b*d);
	cout<<*pa<<"/"<<*(pa+1);
}
void shang(int a,int b,int c,int d)
{
	int *pa;
	pa=hua(a*d,b*c);
	cout<<*pa<<"/"<<*(pa+1);
}
int main()
{
	Fraction num1,*j=&num1;
	Fraction num2,*s=&num2;
	j->a=2;
	j->b=3;
	s->a=4;
	s->b=9;
	int *pa,*res;
	pa=hua(j->a,j->b);
	cout<<*pa<<"/"<<*(pa+1)<<endl;
	return 0;
}
