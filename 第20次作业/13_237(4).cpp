#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>

struct strArray
{
	char *st = NULL;
	int len;
};

int main() {
	int n;
	cin >> n;
	cin.get();
	struct strArray* stra = new strArray[n];
	for (int i = 0; i < n; i++) {
		cout << "Input the lenth of the string:";
		cin >> (stra[i].len);
		stra[i].st = new char[(stra[i].len)+1];
		cin.get();
		cout << "Input the string:";
		cin.get();
		cin.getline(stra[i].st,(stra[i].len)+1);
	}

	sort(stra, stra + n, [](auto s1, auto s2) { if (strcmp(s1.st, s2.st) > 0) return 0; });
	cout << endl;
	cout << "sort by content:" << endl;
	for (int i = 0; i < n; i++) {
		cout << stra[i].st << endl;
	}
	cout << endl;
	

	cout << "sort by the times of presentation" << endl;
	int* num = new int[n];
	memset(num, 0, n * sizeof(int));
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (strcmp(stra[i].st, stra[j].st) == 0) {
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
			if (num[z] == max && strcmp(stra[z].st, out_be) != 0) {
				cout << stra[z].st << "   " << num[z] << endl;
				strcpy_s(out_be, stra[z].st);
			}

		}
		max_be = max;

	}

	for (int i = 0; i < n; i++) {
		delete[] (stra[i].st);
	}
	delete[] stra;
	system("pause");
	return 0;
}