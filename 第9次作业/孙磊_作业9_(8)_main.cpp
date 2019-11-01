//（8）-1-main.cpp 
#include <iostream>
#include "孙磊_作业9_(8)_toHex.cpp" 
#include "孙磊_作业9_(8)_max.cpp" 
using namespace std;

void toHex(int a);
int max(int a,int b);

int main() {
	int a, b;
	while(cin>>a>>b){
		toHex(max(a,b));
	}
	return 0;
}
