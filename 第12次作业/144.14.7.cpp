#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int getSet(int rs[], const int a[], int n);
int getSet2(int rs[], int times[], const int a[], int n);
int getSet3(int rs[], int times[], const int a[], int n);
int main() {
	int a[8] = { 3,1,2,1,5,3,2,1 };
	int rs[50], times[50];
	fill_n(rs, 50, 0);
	fill_n(times, 50, 0);
	getSet(rs, a, 8);
	cout << endl;
	getSet2(rs,times, a, 8);
	cout << endl;
	fill_n(rs, 50, 0);
	fill_n(times, 50, 0);
	getSet3(rs, times, a, 8);
	return 0;
}

int getSet(int rs[], const int a[], int n) {
	rs[0] = a[0];
	cout << "{ "<<rs[0];
	int k = 1;
	for (int i = 1; i < n; i++) {
		rs[i] = a[i];
		int q = 1;
		for (int j = 0; j < i; j++) {
			if (rs[i] == rs[j]) {
				q = 0; break;
			}
		}
		if (q == 1) {
			k++;
			cout << ' '<< rs[i] ;
		}
	}
	cout << " }"<<'\n'<< k<<endl;
	return 0;
}

int getSet2(int rs[],  int times[],const int a[], int n) {
	rs[0] = a[0]; times[0] = 1;
	cout << "{ " << rs[0];

	int k = 1; 
	for (int i = 1; i < n; i++) {
		rs[i] = a[i];
		
		int q = 1;
		for (int j = 0; j < i; j++) {
			if (rs[i] == rs[j]) {
				q = 0; times[j]++; break;
			}
		}
		if (q == 1) {
			times[i]++;
			k++;
			cout << ' ' << rs[i];
		}
	}
	cout << " }" <<'\n'<<"{ ";
	for (int i = 0; i < 50; i++) {
		if (times[i] >= 1)	cout << times[i]<< ' ';
	}
	cout << "}"<<endl;
	return 0;
}

int getSet3(int rs[], int times[], const int a[], int n) {
	rs[0] = a[0]; times[0] = 1;
	cout << "{ " << rs[0];
	int k = 1; 
	for (int i = 1; i < n; i++) {
		rs[i] = a[i];

		int q = 1;
		for (int j = 0; j < i; j++) {
			if (rs[i] == rs[j]) {
				q = 0; times[j]++; break;
			}
		}
		if (q == 1) {
			times[i]++;
			k++;
			cout << ' ' << rs[i];
		}
	}
	cout << " }" << '\n';
	map<unsigned, int> b;
	for (int i = 0; i < 8; i++) {
		if (times[i] < 1)continue;
		b[a[i]] = times[i];
	}
	for (auto y : b) {
		//if (y.second < 1)continue;
		//else
		cout << y.first << ":" << y.second << endl;
	}
	return 0;
}