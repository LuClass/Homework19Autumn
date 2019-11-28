#include<iostream>
#include "hex22.h"
#include "max22.h"
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	toHex(max(a, b));
	return 0;
}