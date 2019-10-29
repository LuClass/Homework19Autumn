2.
 #include<iostream>
 using namespace std;
 int factorial(int n) {
 	if (n == 1||n == 0)
 		return 1;
 	else
 		return n * factorial(n - 1);
 }
 int main() {
 	int n, k;
 	cout << "please input n,k in turn" << endl;
 	cin >> n >> k;
 	if (n > 0 && k >= 0 && n>=k)
 		cout << "C(" << n << "," << k << ")=" << (factorial(n) / factorial(k) / factorial(n - k)) << endl;
 	else
 		cout << "input error!";
 	return 0;
 }
 4.
 #include<iostream>
 using namespace std;
 bool isprime(int n) {
 	int j;
 	for ( j = 2; j*j <= n; j++) {
 		if (n%j == 0)
 			return false;
 	}
 	return true;
 }
 int main() {
 	int i;
 	for (i = 3; i <= 497; i += 2)
 		if (isprime(i) && isprime(i + 2))
 			cout << "(" <<i << "," <<(i + 2) <<")"<< "\t";
 	return 0;
 }
 5.
 #include<iostream>
 using namespace std;
 int main() {
 	unsigned n;
 	cout << "please input an unsigned" << endl;
 	cin >> n;
 	if (n <= 1)
 		cout << "input error!" << endl;
 	else
 		cout << n << " = ";
 	for (int i = 2; i <= n; i++) {
 		while (i != n) {
 			if (n%i == 0) {
 				cout << i << " * ";
 				n = n / i;
 			}
 			else
 				break;
 		}
 	}
 	cout << n;
 	return 0;
 }