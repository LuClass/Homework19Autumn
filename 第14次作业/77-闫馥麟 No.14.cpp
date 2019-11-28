//174页14（1）
#include <iostream>
#include <math.h>
using namespace std;

struct solutions
{
	float x1,x2;
};

//formula
solutions f(int a,int b,int c)
{
	solutions sol;
	float der;
	der=b*b-4*a*c;
	if (der==0)
	sol.x1=(-b+sqrt(der))/2;
	else
	{
		sol.x1=(-b+sqrt(der))/2;
		sol.x2=(-b-sqrt(der))/2;
	}
	return sol;
}


int main()
{
	int a,b,c;float der;
	cout<<"请依次输入二元一次方程的三个系数"<<endl;
	cin>>a>>b>>c;
	der=b*b-4*a*c;
	solutions sol=f(a,b,c);
	if ( a!=0 )
	{
		if (der<0)
	        cout<<"方程无根";
   		else 
   		{
   			if (der==0)
	        	{cout<<"方程有一个根:"<<endl;
	        		cout<<sol.x1<<endl;
            	}
	        else 
	        	{cout<<"方程有两个根:"<<endl;
	        	cout<<sol.x1<<' '<<sol.x2<<endl;
    	    	}
   		}
	}
   return 0;
}	



//174页14（2）
#include<iostream>
#include<math.h>
using namespace std;

struct Point
{
	int x,y;
};

struct pa
{
	float peri,area;
};


//calculate distance between two points
float f1(Point p1,Point p2)
{
	float d;
	d=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
	return d;
}

//calculate perimeter and area
pa f2(Point p1,Point p2,Point p3)
{
	pa PA;
	float p,a,b,c;
	a=f1(p1,p2);
	b=f1(p2,p3);
	c=f1(p1,p3);
	PA.peri=a+b+c;
	p=PA.peri/2.0;
	PA.area=sqrt(p*(p-a)*(p-b)*(p-c));
	return PA;
}

struct triangle
{
	Point p1,p2,p3; pa PA=f2(p1,p2,p3);
	triangle(Point P1,Point P2,Point P3):p1(P1),p2(P2),p3(P3)
	{
		if (f1(p1,p2)+f1(p2,p3)>f1(p1,p3))
		{
			cout<<"triangle yes"<<endl;
			cout<<"perimeter="<<PA.peri<<endl;
			cout<<"area="<<PA.area<<endl;
		}	
		else
		cout<<"triangle no"<<endl;
	}
};


int main ()
{
	Point p1,p2,p3;float d;
	cout<<"Calculate distance between two points"<<endl; 
	cout<<"Please input the coordinates of two points"<<endl;
	cin>>p1.x>>p1.y>>p2.x>>p2.y;
	cout<<"distance="<<f1(p1,p2)<<endl;
	cout<<"Please input the coordinates of three points"<<endl;
	cin>>p1.x>>p1.y>>p2.x>>p2.y>>p3.x>>p3.y;
	triangle tri=triangle(p1,p2,p3);
	return 0;
} 
