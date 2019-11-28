#include <iostream>
using namespace std;

#include"hex.h"
#include"max.h"
int main() {
	cout<<"请输入两个整数"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"十六进制形式显示的最大值"<<endl;
	toHex(max(x,y));
	return 0;
}
