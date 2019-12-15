#include<iostream>
using namespace std;
#include<string.h>

int getWordCount(char* a) {
	int len = strlen(a);
	int num = 0;
	for (int i = 0; i < len; i++) {
		if ((i == 0 || i == len - 1) && (a[i] == ' ' || a[i] == '	')) {
			continue;
		}
		if (a[i] == ' ' || a[i] == '	') {
			num++;
		}
	}
	return num + 1;
}

int main() {
	char* a;
	a = (char*)malloc(128 * sizeof(char));
	cin.getline(a, 128);
	cout << getWordCount(a);
	free(a);
	system("pause");
	return 0;
}