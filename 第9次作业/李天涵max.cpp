using namespace std;
#include <iostream>
#include <iomanip>
int x;
void toHex(int x);
void max(int,int)
{
	extern int a,b;
	x=a>b?a:b;
	toHex(x);
}
