#include<iostream>
using namespace std;
int func(int n);
int main() {
	int i=0,j=0;
	cout << "i<j¡£    i,j:";
	cin >> i >> j;
	if (i >= j)return 0;
	for (int n= i; n<= j; n++) {
		if (n == func(n))cout << n<<endl;

	}
	return 0;
}
int func(int n) {
	int k = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)k += i;
	}
	return k;
}