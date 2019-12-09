//(6)
#include <iostream>
#include <string>
//#define MAX 50
using namespace std;
int cnt;
string s;

//Master theorem	T(n)=2T(n/2)+O(n) = O(nlogn)
void mergeSort(char a[], int left, int right, char tmp[]) {
	if (left < right) {
		//avoid overflow
		int m = left + ((right - left)>>1);
		mergeSort(a, left, m, tmp);
		mergeSort(a, m + 1, right, tmp);
		int i = left; int j = m + 1;
		int t = 0;
		while (i <= m || j <= right) {
			if (j > right || (i <= m && a[i] <= a[j])) {
				tmp[t++] = a[i++];
			}
			else {
				tmp[t++] = a[j++];
				cnt += m - (i - 1);
			}
		}
		t = 0;
		while (left <= right) {
			a[left++] = tmp[t++];
		}
	}
}

int getRev(char a[]) {
	return cnt;
}

int main() {
	//field 'max' is never used
	//String is best
	int max;
	while (cin >> s) {
		cnt = 0;
		char* tmp = new char[s.length()];
		char* a = (char*)s.c_str();
		/*
		1145141919810
		30
		0111111445899
		*/
		mergeSort(a, 0, s.length() - 1, tmp);
		cout << getRev(a) << endl;
		cout << a << endl;
	}
	return 0;
}




//(4)
#include <bits/stdc++.h>
using namespace std;

struct record {
	string s;
	int count = 0;
	bool operator<(const record& b) const {
		return this->count < b.count;
	}
	bool operator>(const record& b) const {
		return this->count > b.count;
	}
	bool operator==(const record& b) const {
		return this->s == b.s;
	}
	record(string s_, int count_) :s(s_), count(count_) {}
};

int main() {
	int n;
	cin >> n;
	vector<record> r;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		record tmp(s, 1);
		vector<record>::iterator it = find(r.begin(), r.end(), tmp);
		if (it == r.end())r.push_back(tmp);
		else ++(it->count);
	}
	sort(r.begin(), r.end(),greater<record>());
	for (auto& x : r) {
		cout << x.s << " " << x.count << endl;
	}
	return 0;
}
