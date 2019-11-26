#include <iostream>
#include"hex.h"
using namespace std;
void toHex(int x){
	while(x!=0){
		int i=(x%16);
		if(i>=0&&i<10){
			cout<<i;
		}
		else{
			cout<<(char)('A'+i-10);
		}
		x/=16;
	}
}
