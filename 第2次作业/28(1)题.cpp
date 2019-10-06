#include <iostream>
using namespace std;
int main() {
	double x;
	cout << "输入一个摄氏温度C:";
	cin >> x;
	cout << "对应华氏温度F：" << x * 9 / 5 + 32 << endl;
	cout << "对应绝对温度K：" << x + 273.15 << endl;
	return 0;
}