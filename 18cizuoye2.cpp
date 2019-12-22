#include<iostream>
#include<string.h>
using namespace std;
char* func(char* a) {
	for (int i = 0;a[i]; i++) {
		if (a[i] == ' ') {
			for (int j = 0; j < strlen(a) - i; j++) {
				a[i + j] = a[i + j + 1];
			}
		}
	}
	return a;
}
int main() {
	char a[50] = {};
	cin.getline(a, 50);
	char *b = a;
	cout<<func(b);
}