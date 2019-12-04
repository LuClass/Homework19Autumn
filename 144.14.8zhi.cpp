#include<iostream>
#include<string.h>
using namespace std;
int getwordcount(char* a[]) {
	int n = strlen(*a), k = 0;
	for (int i = 0; i < n; i++) {
		if ((a[0][i] == ' ' && a[0][i + 1] != ' ' && a[0][i + 1] != '\0') || (a[0][i] == '\t' && a[0][i + 1] != '\t')) {
			k++;
		}
	}
	return k + 1;
}
int main() {
	char a[1][200];
	cin.getline(a[0], 200);
	char* p = a[0];
	cout << getwordcount(&p);
	return 0;
}