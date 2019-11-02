#include "hex.h"
#include "max.h"

using namespace std;

int max(int a,int b);
void toHex(int x);

int main(){
	int a,b;
	cin>>a>>b;
	a=max(a,b);
	toHex(a);
	return 0;
}

