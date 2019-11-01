//（8）-2不用多文件即把函数全部定义在一个文件 
#include <iostream>
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

int max(int a,int b){
	return a>b?a:b;
}

void toHex(int a){
	cout<<hex<<a<<endl;
}
