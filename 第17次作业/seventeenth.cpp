//P237 41(4),(5)
//16次作业和17次作业弄混了...这个是的第16次的作业，上次交的是第17次的作业
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



#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	vector<string> v;
	for (int i = 0; i < s.length(); ++i) {
		string tmp;
		while (s[i] >= '0' && s[i] <= '9') {
			tmp += to_string(s[i] - '0');
			++i;
		}
		if(tmp.length()!=0)v.push_back(tmp);
	}
	cout << v.size() << endl;
	for (auto& x : v)cout << x << endl;
	return 0;
}