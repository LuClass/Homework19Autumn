#include<iostream>
#include<string.h>
using namespace std;
int getrev(char a[]) {
	int n = strlen(a),k=0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				k++;
			}
		}

	}
	return k;
}
int main() {
	char a1[10]; char b[4][20],temp[20];
	cout << "输入字符串<10个。" << endl;
	cin.getline(a1, 10);
	cout << getrev(a1) << '\n' << "第二小问：" << endl;
	int max=0,mun=0;
	cin >> max;
	mun = cin.get();
	cout << max << endl;
	for (int i = 0; i <=max-1; i++) {
		cin.getline(b[i], 20);
	}
	for (int i = 0; i <=max - 1; i++) {
		for (int j = i + 1; j < max; j++) {
			if (getrev(b[i]) > getrev(b[j])) {
				strcpy_s(temp, b[i]);
				strcpy_s(b[i],b[j] );
				strcpy_s(b[j],temp);
			}
		}
		cout << getrev(b[i]) << ":" << b[i] << endl;
	}
	return 0;
}