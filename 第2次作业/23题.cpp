#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 2 && x % 2 == 0) {
		cout << x << "是偶数，其判断表达式为：x > 2 && x % 2 == 0" << endl;
	}
	else
		cout << x << "不符合要求。" << endl;
	return 0;
}