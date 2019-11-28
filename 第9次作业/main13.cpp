#include <iostream>
#include"head13.h"
using namespace std;


int main(void) {
	int x, y;
	cin >> x >> y;
	int m;
	m = max(x, y);
	toHex(m);
	return 0;
}