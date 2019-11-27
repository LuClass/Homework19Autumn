#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
struct  A
{
	char youwujie[5];
	int jieshu;
	float x1;
	float x2;
	
}AA;
A f(int a,int b,int c)
{
	float delta=b*b-4*a*c;
	A B;
	if (delta<0)
	{
		strcpy(B.youwujie,"无解");
		B.jieshu=0;
		B.x1=0;
		B.x2=0;
	};
	if (delta==0)
	{
		strcpy(B.youwujie,"有解");
		B.jieshu=1;
		B.x1=(-b)/2*a;
		B.x2=(-b)/2*a;
	};
	if (delta>0)
	{
		strcpy(B.youwujie,"有解");
		B.jieshu=2;
		B.x1=((-b)+sqrt(delta))/2*a;
		B.x2=((-b)-sqrt(delta))/2*a;
	};
	return B;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
    A AA=f(a,b,c);
    cout<<AA.youwujie<<endl;
    cout<<AA.jieshu<<endl;
    cout<<AA.x1<<endl;
	cout<<AA.x2<<endl; 
}

