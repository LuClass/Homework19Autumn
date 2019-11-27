#include<iostream>
using namespace std;

struct Fraction
{
	int a, b;
};
 
 int gong(int a, int b) 
 {
 	for(int i=0;;i++) 
 	{int q;q=a%b;a=b;b=q;
 	  if(q==0)
 	  {return a;break;}
 	}
 	
 }
void yuefen(Fraction *p) 
{
	int t=gong(p->a,p->b);
  	if(p->a!=0)
   {
    	cout<<p->a/t<<"/"<<p->b/t<<endl;
   }
      else
      cout<<0<<"/"<<1<<endl;
}

void jia(Fraction *n,Fraction *m)
{
	int c=(n->b)*(m->b);
	int d=(n->a)*(m->b) +(m->a) *(n-> b) ;
	int t=gong(c,d);
	cout<<"ºÍ£º"<<d/t<<"/"<<c/t<<endl;
}

void jian(Fraction *n,Fraction *m) 
{
	int c=(n->b)*(m->b);
	int d=(n->a)*(m->b) -(m->a) *(n-> b) ;
	int t=gong(c,d);
	cout<<"²î£º"<<d/t<<"/"<<c/t<<endl;
}

void cheng(Fraction *n,Fraction *m) 
{
	int c=(n->b)*(m->b);
	int d=(n->a)*(m->a);
	int t=gong(c,d);
	cout<<"»ý£º"<<d/t<<"/"<<c/t<<endl;
}

void chu(Fraction *n,Fraction *m) 
{
	if(m->a!=0)
    {  int c=(n->b)*(m->a);
        int d=(n->a)*(m->b);
        int t=gong(c,d);
    	cout<<"ÉÌ£º"<<d/t<<"/"<<c/t<<endl;
    }
	else
    	cout<<"´íÎó";
}

int main()
{
	Fraction n,m;
	cin>>n.a>>n. b>>m. a>>m. b;
	yuefen(&n);
	yuefen(&m) ;
	jia(&n,&m);
	jian(&n,&m);
	cheng(&n,&m);
	chu(&n, &m) ;
}

