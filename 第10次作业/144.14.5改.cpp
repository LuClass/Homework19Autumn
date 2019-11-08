#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool func(int n);
int gewei(int n);
void part(int n);
bool isSmith(int n);
const int m = 25;
int a [m] = {},k=0;
int main() {
	int x = 1;
	cin >> x;
	//cout << a[0] << endl;
	cout << boolalpha << isSmith(x) << endl;
	for (int j = 4397774;; j++) {
		for (int e = 0; e < m; e++) {
			a[e] = {};
		}
		k = 0;
		if (isSmith(j)) {
			cout << j << endl;
			break;
		}
		
	}
	for (auto y : a)
		cout << y << ' ';

	return 0;
}
bool func(int n) {                 //判断素数
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)return 0;
	}
	return 1;
}
int gewei(int n){                  //累加各个位数
	int q = 0;
	for (; n != 0;) {
		q += n % 10;
		n /=10;
	}
	return q;
}
void part(int n) {                 //计算质因数
	int r = n;
	for (int i = 2; i <= n; i++) {
		if (func(i)) {
			for (; (n%i) == 0;k++) {
				n /= i;
				//cout << i << endl;
				a[k]=i;
			}
		}
	}
	return ;


}
bool isSmith(int n) {
	int smith = 0;
	if (func(n) )return 0;           //判断Smith数在非素数中
	part(n);
	for (int i = 0; i <= m-1;i++) {
		smith += gewei(a[i]);
	}
	//cout << smith<<endl;
	if (gewei(n) == smith)return 1;
	return 0;
}
