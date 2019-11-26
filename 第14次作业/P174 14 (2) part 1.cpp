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
	Point A;
	Point B;
	cin>>A.x;
	cin>>A.y;
	cin>>B.x;
	cin>>B.y;
	float sum;
	sum=juli(A,B);
	cout<<sum<<endl;
}
