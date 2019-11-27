#include <iostream>
#include "max.cpp"
#include "hex.cpp"
using namespace std;
int main(void)
{
	int a,b;
	cout<<"ÊäÈëa£º";
	cin>>a;
	cout<<"ÊäÈëb£º";
	cin>>b;
	toHex(max(a,b));
}
