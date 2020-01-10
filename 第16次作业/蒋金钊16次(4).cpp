#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>

int main() {
	int n;
	cin >> n;
	cin.get();
	char* str[10];

	for (int i = 0; i < 10; i++) {
		str[i] = new char[20];
	}

	for (int i = 0; i < n; i++) {
		cin.getline(str[i], 20);
	}
	sort(str, str + n, [](auto s1, auto s2) { if (strcmp(s1, s2) > 0) return 0; });
	cout << endl;
	cout <<"sort by content:" <<endl;

	for (int i = 0; i < n; i++) {
		cout << str[i] << endl;
	}
	cout << endl;
	cout << "sort by the times of presentation"<<endl;
	int* num = new int[n];
	memset(num, 0, n*sizeof(int));
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (strcmp(str[i], str[j]) == 0) {
				(num[i])++;
			}
		}
	}
	int max;
	int max_be = 0x7fffffff;
	char out_be[20];
	for (int i = 0; i < n; i++) {
		max = 0;
		for (int j = 0; j < n; j++) {
			if (num[j] > max&&num[j] < max_be) {
				max = num[j];
			}
		}
		for (int z = 0; z < n; z++) {
			if (num[z] == max && strcmp(str[z], out_be) != 0) {
				cout << str[z] << "   " << num[z] << endl;
				strcpy_s(out_be, str[z]);
			}
			
		}
		max_be = max;
		
	}

	for (int i = 0; i < 10; i++) {
		delete str[i];
	}
	system("pause");
	return 0;
}
