#include<iostream>
#include<math.h>
using namespace std;
float area(int a,int b,int c) {
	float s=(a+b+c)/2.0;
	return sqrt ((s*(s-a)*(s-b)*(s-c)));
}
int main ()
{int a,b,c;
cin>>a>>b>>c;
cout<<area(a,b,c);
return 0;
}
