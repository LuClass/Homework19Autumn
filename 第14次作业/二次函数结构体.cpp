#include<iostream.h>
#include<math.h>
struct str
{   bool flag; 
	double x1,x2;
};
str f(int a,int b,int c)
{   str test;
	int p;
	p=b*b-4*a*c;
	if(p<0)
	    test.flag=false;
	else
        test.flag=true;
    test.x1=(-b+sqrt(p))/2/a;	
	test.x2=(-b-sqrt(p))/2/a;
	return test;
}
void main()
{    int a,b,c;
     cin>>a>>b>>c;
	 if(!f(a,b,c).flag)
		 cout<<"函数无实根";
	 else
	     cout<<"x1="<<f(a,b,c).x1<<" x2="<<f(a,b,c).x2<<endl;
} 