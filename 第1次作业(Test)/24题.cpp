#include <iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 8 || x <-8) {
		cout << x << "绝对值>8，其判断表达式为：x > 8 || x <-8" << endl;
	}
	else
		cout << x << "不符合要求。" << endl;
	return 0;
}