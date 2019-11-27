//14（7）
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
const int a[] = { 3,1,2,3,1,5,2,1 };
const int n = 8;
int rs[n];
const int homo[] = { 1,1,4,5,1,4,1,9,1,9,8,1,0 };
const int homoN = 13;

struct record {
	int num = 0;
	int count = 0;
	bool operator<(const record& b) const {
		return this->count < b.count;
	}
	bool operator>(const record& b) const {
		return this->count > b.count;
	}
	bool operator==(const record& b) const {
		return this->num == b.num;
	}
	record(int num_, int count_) :num(num_), count(count_) {}
};

//function1 and function2
int getSet1_2(int rs[], const int a[], int n) {
	//key:num value:count
	map<int, int> m;
	for (int i = 0; i < n; ++i) {
		m[a[i]]++;
	}
	map<int, int>::iterator it = m.begin();
	int j = 0;
	for (it; it != m.end(); ++it) {
		//cout << it->first << " " << it->second << endl;
		rs[j++] = it->first;
	}
	return m.size();
}

int getSet3(int rs[], const int a[], int n) {
	vector<record> v;
	for (int i = 0; i < n; i++) {
		auto it = find(v.begin(), v.end(), record(a[i], 1));
		if (it == v.end()) {
			v.push_back(record(a[i], 1));
		}
		else {
			it->count++;
		}
	}
	sort(v.begin(), v.end(), greater<record>());
	for (auto const& x : v) {
		cout << x.num << " " << x.count << endl;
	}
	return v.size();
}

////version1.2
//int getSet3(int rs[], const int a[], int n) {
//	//key:num value:count
//	map<int, int> m;
//	for (int i = 0; i < n; ++i) {
//		m[a[i]]++;
//	}
//	vector<pair<int, int> > v;
//	for (auto it = m.begin(); it != m.end(); ++it) {
//		v.push_back(pair<int, int>(*it));
//	}
//	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {return a.second > b.second; });
//	for (auto const& x : v) {
//		cout << x.first << " " << x.second << endl;
//	}
//	return m.size();
//}

/*ouput
4
1 3
3 2
2 2
5 1
4
1 6
4 2
9 2
5 1
8 1
0 1
6
*/
int main() {
	
	cout << getSet1_2(rs, a, n) << endl;
	cout << getSet3(rs, a, n) << endl;
	cout << getSet3(rs, homo,homoN) << endl;
	return 0;
}

