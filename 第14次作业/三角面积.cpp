#include<iostream>
#include<math.h>
using namespace std;
struct point{
	int x;
	int y;
};
double dis(point a,point b){
	double d = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return d; 
}
struct triangle{
	point a;
	point b;
	point c;
};
bool iftri(triangle x){
	if(dis(x.a,x.b)+dis(x.a,x.c)>dis(x.b,x.c)&&dis(x.a,x.b)+dis(x.b,x.c)>dis(x.a,x.c)&&dis(x.a,x.c)+dis(x.b,x.c)>dis(x.a,x.b))
		return true;
	else 
		return false;
}
double square(triangle x){
	double s=1.0/2*(dis(x.a,x.b)+dis(x.b,x.c)+dis(x.a,x.c));
	return sqrt(s*(s-dis(x.a,x.b))*(s-dis(x.b,x.c))*(s-dis(x.a,x.c)));
}
int main()
{
	cout<<"三个点的坐标:"<<endl;
	triangle t;
	cin>>t.a.x>>t.a.y;
	cin>>t.b.x>>t.b.y;
	cin>>t.c.x>>t.c.y;
	if(iftri(t)){
		cout<<"d = "<<dis(t.a,t.b)+dis(t.a,t.c)+dis(t.b,t.c)<<endl;
		cout<<"s = "<<square(t);
	}
	else
		cout<<"It's not a triangle.";
		


    return 0;
 }

