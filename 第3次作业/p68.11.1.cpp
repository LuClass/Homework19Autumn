#include <iostream>
using namespace std;
int main() {
	int a = 1, b = 1;
	cout << "输入一个int整数，显示为全部位数(默认32位)的二进制形式。" << endl;
	cout << "整数:" ;
	cin >> a;
	for (int i = 32, n = 1; n <= i; n++) {                          //修改i的值，可以改变默认位数
		b = (a >> (i - n)) & 1;
		cout << b;
	}
	return 0;
}