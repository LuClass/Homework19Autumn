#include<iostream>
#include<string.h>
using namespace std;
long long func(long long a, long long m);
long long fang(long long n);
int main() {
	long long a = 0, n = 0, p = 0;
	cin >> a;
	for (long long i = a; i != 0; n++)i /= 10;
	for (long long i = 1; i <= n; i++) {
		if (func(a, i) == func(a, n - i + 1))p++;
		//cout << func(a,i)<<" ";
		//cout << func(a, n - i + 1) << endl;
	}
	//cout << n << " " << p;
	if (p == n)cout << "true";
	else cout << "false";
	return 0;
}
long long func(long long a, long long m) {
	return (a/fang(m)%10);
}
long long fang(long long n) {
	long long k = 1;
	for (long long i = 1; i < n; i++)
		k *= 10;
	return k;
}