#include <iostream>
using namespace std;
int main() {
	cout << "打印出如下图案（平行四边形）" << endl;
	cout << "长，高：";
	int a = 0, b = 0;
	cin >> a >> b;
	for (int i = 1; i <= b; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= b; i++) {
		for (int j = b-i+1; j >=1; j--) {
			cout << " ";
		}
		for (int j = 1; j <= a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}