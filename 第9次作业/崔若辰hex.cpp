
#include "hex.h"

using namespace std;

void toHex(int x){
	int i;
	char ch;
	if(x<0){
		x=-x;
		cout<<"-";
	}
	for(i=28;i>=0;i-=4){
		ch=(x>>i)&0x0000000f;
		if(ch>=0&&ch<=9)
		    cout<<char(ch+48);
		else
		    cout<<char(ch+87);
	}
}
