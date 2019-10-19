#include <iostream>;
using namespace std;
int func(int n);
int main() {
	cout << "有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？" << endl;
	cout << "共几月：";
	int i = 1, n = 0;
	cin >> i;
	for (int j = 1; j <= i; j++) {
		n=func(j);
		cout << n<<endl;
	}
	return 0;
}
int func(int n) {
	if (n == 1 || n == 2)return 1;
	return func(n - 1) + func(n - 2);
}