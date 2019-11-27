#include <iostream>
#include"max14.h"
#include"hex14.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
	int x,y,n;
	cin>>x>>y;
	n=max(x,y);
	toHex(n);
	return 0;
}
