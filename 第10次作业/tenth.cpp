//14(2)
#include <iostream>
#include <ctime>
using namespace std;
int a[10];

void getRandom(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		a[i] = rand() % 101;	//[0,100]
	}
}

int getMax(const int a[], int n) {
	int tmp = INT_MIN;
	int tmp_i = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] > tmp) {
			tmp = a[i];
			tmp_i = i;
		}
	}
	return tmp_i;
}

int main() {
	srand(time(NULL));
	getRandom(a, 10);
	//for (auto x : a) { cout << x << endl; }
	cout << getMax(a, 10) << endl;
	return 0;
}



//14(5)
#include <iostream>
#include <string>
using namespace std;

bool isSmith(int n) {
	int answer = n;
	string s = to_string(n);
	int left = 0, right = 0;
	//get the sum of each digit 
	for (int i = 0; i < s.length(); ++i) {
		left += s[i] - '0';
	}
	//get the sum of prime
	int sq = sqrt(n) + 1;
	for (int d = 2; d < sq;) {
		if (n % d == 0) {
			string tmp = to_string(d);
			for(int i =0;i<tmp.length();++i)
			right += tmp[i] - '0';
			n /= d;
			continue;
		}
		++d;
	}
	if (n != 1) {
		string tmp = to_string(n);
		for (int i = 0; i < tmp.length(); ++i)
		right += tmp[i] - '0';
	}
	if (left == right) {
		cout << answer << endl;
		return true;
	}
	return false;
}

int main() {
	int n = 4937774;
	//4937775 is the first Smith number historically: 4937775 = 3*5*5*65837 and 4+9+3+7+7+7+5 = 3+5+5+(6+5+8+3+7) = 42
	//the Answer to the Ultimate Question of Life, the Universe, and Everything
	while (!isSmith(n)) {
		++n;
	}
	return 0;
}



//14(10)
#include <iostream>
using namespace std;
int solveJosephus(int n, int k) {
	if (k == 1) return n - 1;
	int ans = 0;
	for (int i = 2; i <= n;) {
		if (ans + k >= i) {
			ans = (ans + k) % i;
			++i;
			continue;
		}
		int step = (i - ans - 2) / (k - 1);
		if (i + step > n) {
			ans += (n - (i - 1)) * k;
			break;
		}
		i += step;
		ans += step * k;
	}
	return ans;
}

int main() {
	int n, k;
	cin >> n >> k;
	//n=21,k=5,ans=12
	cout << solveJosephus(n, k)%n + 1 << endl;
}
