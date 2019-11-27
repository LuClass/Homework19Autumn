#include<iostream>
#include<math.h>
using namespace std;

struct cons
{
	int a,b,c;
	double dalta;
	int n;
	double x1,x2;	
};

cons solve(int a,int b,int c)
{
	cons p;
	p.a=a;
	p.b=b;
	p.c=c;
	int d=b*b-4*a*c;
	p.dalta=d;
	if(d<0)
	{
		p.n=0;
		p.x1=0;
		p.x2=0;
	}
	if(d==0)
	{
		p.n=1;
		p.x1=-b/(a*2);
		p.x2=-b/(a*2);
	}
	if(d>0)
	{
		p.n=2;
		p.x1=(-b+sqrt(d))/(a*2);
		p.x2=(-b-sqrt(d))/(a*2);
	}
	return p;
}

int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<endl<<endl;
	//cout<<"ԭʽ��"<<a<<" *x^2 "<<b<<" x "<<c<<" =0"<<endl;
	//cout<<"dalta��"<<solve(a,b,c).dalta<<endl;
	//cout<<"����"<<solve(a,b,c).n<<endl;
	//cout<<"���"<<solve(a,b,c).x1<<" "<<solve(a,b,c).x2<<endl;
	return 0;
	
	char ch[50],te[50];
	cout<<"please input a string:";
	cin.getline(ch,50);
	for(int n=0;n<50;n++)
	{
		if(ch[n]>='A'&&ch[n]<='Z')
			te[n]=ch[n]+32;
		else
			te[n]=ch[n];		
	}	
	cout<<ch<<endl<<te;
}