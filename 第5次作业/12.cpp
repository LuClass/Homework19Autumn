#include <iostream>;
using namespace std;
bool func(int n);
int main() {
	cout << "判断101-200之间有多少个素数，并输出所有素数。" << endl;
	int m = 0;
	for (int j = 101; j <= 200; j++) {
		if (func(j)) {
			cout << j << endl;
			m++;
		}
	}
	cout << "一共" << m << "个素数。" << endl;
	return 0;
}bool func(int n) {
	for (int i = 2; i < n / 2; i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}