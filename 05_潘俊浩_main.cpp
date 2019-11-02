#include <iostream>
#include "max.cpp"
#include "hex.cpp"
using namespace std;
int main() {
	int a,b,x;
	cin >> a >> b;
	x = max(a,b);
	toHex(x);
	
	return 0;
}
