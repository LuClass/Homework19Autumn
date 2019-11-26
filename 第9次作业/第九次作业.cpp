(8).
//main.cpp
#include <iostream>
using namespace std;
int m,n;
int main ()
{
	cin>>m>>n;
	int max(int,int);
	int toHex(int x);
	cout<<"最大值:"<<max(int,int)<<endl;
	cout<<"十六进制:"<<toHex(int x)<<endl;
	return 0;
}
//max.cpp
#include <iostream>
using namespace std;
int max(int,int)
{   
    extern int m,n;
	return m>n?m:n;
}
//hex.cpp
#include <iostream>
using namespace std;
int toHex(int x)
{
	static int m,n;
	char a;
	cout<<"0x";
	if(x<=9)
	cout<<x;
	else
	{if(x<16)
	n=x-10;
	cout<<char(a+n)<<endl;
	else
	for(;x!=0;x/=16)
	{
		m=x%16;
		cout<<m;
	}
    }
    return 0;
}

(9). 
#include <iostream>
#include <math.h>
using namespace std;
static double a,b,c,s;
int main ()
{
	double area(double a,double b,double c);
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<area(a,b,c)<<endl;
	return 0;
}
area(double a,double b,double c)
{	
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

#include <iostream>
#include <math.h>
using namespace std;
double a,b,c;
#define s (a+b+c)/2
#define area sqrt(s*(s-a)*(s-b)*(s-c))
int main ()
{
	cin>>a>>b>>c;
	cout<<area<<endl;
	return 0;
}
