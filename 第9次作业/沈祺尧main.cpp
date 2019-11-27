#include <iostream>
using namespace std;
int max(int,int);
int toHex(int);
int main(){
	int a,b,x;
	cout<<"请输入两个整数：";
	cin>>a>>b;
    toHex(max(a,b));
	return 0;
}
