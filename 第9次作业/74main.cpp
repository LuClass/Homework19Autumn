#include <iostream>
using namespace std;
#include "74hex.cpp"
#include "74max.cpp" 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,x;
	cin>>a>>b;
	x=max(a,b);
	cout<<x<<endl;
	hex(x);
	return 0;
}
