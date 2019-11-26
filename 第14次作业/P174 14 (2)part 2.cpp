#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
struct Point
{
	int x;
	int y;
}point;
float juli(Point point1,Point point2)
{
	float sum;
	sum=sqrt((point1.x-point2.x)*(point1.x-point2.x)+(point1.y-point2.y)*(point1.y-point2.y));
	return sum;
}
int main()
{
	Point A,B,C;
	cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y; 
	float sum1,sum2,sum3;
	sum1=juli(A,B);sum2=juli(B,C);sum3=juli(A,C);
	float delta=sum1+sum2-sum3;
	float c,s;
	c=(sum1+sum2+sum3)/2;
	s=sqrt(c*(c-sum1)*(c-sum2)*(c-sum3));
	if (delta>0&&s!=0) 
	{
		cout<<"capable "<<endl;
		c*=2;
		cout<<"c="<<c<<endl;
		cout<<"s="<<s<<endl; 
	}
	else 
	cout<<"incapable";
}
