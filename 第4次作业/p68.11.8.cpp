#include <iostream>;
using namespace std;
int main() {
	cout << "输入一个正整数，显示其所有因子，在此基础上求出1-100之间的完全数。" << endl;
	int a = 2, b = 1;
	cin >> a;
	cout << "其所有因子为：";
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			cout << i << ' ';
		}
	}
	cout << endl;
	cout << "1-100之间的完全数为：" << endl;
	for (int count = 1,j=0; count <= 100; count++) {
		for (int i = 1; i < count; i++) {
			if (count % i == 0) {
				j+=i;
			}
		}
		if (count == j) {
			cout << j << ' ';
		}
		j = 0;
	}
	return 0;
}