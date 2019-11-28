//11(4)
#include <iostream>
using namespace std;
int main() {
	char ch;
	int count = 0;
	while (cin.get(ch) && ch!=EOF) {
		if ('0' <= ch && ch <= '9')++count;
	}
	return 0;
}

//11(7)
#include <iostream>
using namespace std;
int main() {
	double dividend = 3;
	double divisor = 2;
	double result, tmp;
	double zero = 1.0 / 2;
	cout << zero << " " << "1" << " " << "2" << endl;
	for(int i = 1; i < 20; ++i) {
		result = dividend / divisor;
		cout << result << " " << dividend << " " << divisor << endl;
		tmp = dividend;
		dividend += divisor;
		divisor = tmp;
	}
	return 0;
}

//11(8)
//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
void getFactors(int x,int sx,vector<int>& fac) {
	fac.push_back(1);
	for (int j = 2; j < sx; ++j) {
		if (x % j == 0 && j*j!=x) {
			//cout << j << " " << x / j << endl;
			fac.push_back(j);
			fac.push_back(x / j);
		}
		else if (x % j == 0 && j * j == x) {
			//cout << j << endl;
			fac.push_back(j);
		}
	}
}


int main() {
	for (int i = 1; i <= 100; ++i) {
		if (i == 1) {
			//cout << "nope" << endl;
			continue;
		}
		vector<int> fac;
		int sx = (int)sqrt(i) + 1;
		getFactors(i,sx,fac);
		vector<int>::iterator it = fac.begin();
		int sum = 0;
		for (it; it != fac.end(); ++it) {
			sum += *it;
		}
		//perfect number!6'\x0a'perfect number!28
		if (sum == i)cout << "perfect number!"<< i << endl;

		//else cout << "nope" << endl;
	}
	return 0;
}