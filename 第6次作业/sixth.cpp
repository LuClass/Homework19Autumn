//21(2)
#include <iostream>
//#include <cassert>
#define debug
typedef long long ll;
using namespace std;
ll NCK[100][100];
//利用变下项求和公式求和
//实际上求的就是杨辉三角(Pascal's triangle)
/*
 ll NCK(int n,int k) {
	if (k > (n / 2))k = n - k;
	if (n == k || k == 0) {
		return 1;
	}
	else if (n>=k) {
		return Com(n - 1, k - 1) + Com(n - 1, k);
	}
	else {
		throw "error!";
	}
}
*/
int main(){
	NCK[0][0] = 1;
	//NCK[50][25] = 126410606437752
	for (int i = 1; i <51; i++) {
		NCK[i][0] = 1;
		NCK[i][i] = 1;
		for (int j = 1; j < i; j++) {
			NCK[i][j] = NCK[i - 1][j - 1] + NCK[i - 1][j];
		}
	}
	int testCase[][2] = { {4,2},{6,4},{8,7} };
	//6 15 8
	for (int i = 0; i < 3; i++) {
		if (testCase[i][1] > testCase[i][0] - testCase[i][1])testCase[i][1] = testCase[i][0] - testCase[i][1];
		cout << NCK[testCase[i][0]][testCase[i][1]] << "\x20";
	}
#ifndef debug
	int n, k;
	cin >> n >> k;
	if (k > n - k)k = n - k;
	cout << NCK[n][k] << endl;
	string s = to_string(NCK[n][k]);
	cout << s.length() << endl;
#endif // !debug
	return 0;
}





//21(4)
#include <iostream>
#include <vector>
//#include <ctime>
#define debug
using namespace std;
const int MAX = 1<<25;
bool noPrime[MAX];
int prime[MAX], countPrime;
//vector<int> prime;

/*一般线性筛法(Sieve_of_Eratosthenes)
int main() {
	for (auto j = 2; j <=MAX; j++) {
		if (noPrime[j] == 1)continue;
		for (auto i = j+j; i <= MAX; i += j) {
			noPrime[i] = 1;
		}
	}
#ifndef debug
	for (int i = 2; i <= MAX; i++) {
		if (noPrime[i] == 0)cout << i << endl;
	}
#endif // !debug
	return 0;
}
*/

//快速线性筛法
int main() {
	for (int i = 2; i < MAX; i++) {
		if (!noPrime[i]) {
			//prime.push_back(i);
			//++countPrime;
			prime[countPrime++] = i;
		}
		for (int j = 0; j < countPrime && i * prime[j] < MAX; j++) {
			noPrime[i * prime[j]] = 1;
			if (!(i % prime[j]))break;
		}
	}
	for (int i = 0; i < countPrime; i++) {
		if (prime[i + 1] - prime[i] == 2)cout << prime[i] << " " << prime[i + 1] << endl;
		if (prime[i] > 500)break;
	}
#ifndef debug
	//0.389
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
	vector<int>::iterator it = prime.begin();
	for (it; it < prime.end(); it++)
		cout << *it << endl;
#endif // !debug
	return 0;
}





//21（5）
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 1 || n == 2 || n == 3) {
			cout << n << "=" << n << endl;
			continue;
		}
		cout << n << "=";
		vector<int> fac;
		int sq = sqrt(n) + 1;
		for (int d = 2; d < sq;) {
			if (n % d == 0) {
				fac.push_back(d);
				n /= d;
				continue;
			}
			++d;
		}
		if (n != 1)fac.push_back(n);
		vector<int>::iterator it = fac.begin();
		for (it; it < fac.end() - 1; it++) {
			cout << *it << "*";
		}
		cout << *it << endl;
	}
	return 0;
}