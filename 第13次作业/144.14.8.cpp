#include<iostream>
#include<string.h>
using namespace std;
int getwordcount(char a[]) {
	int n = strlen(a),k=0;
	for (int i = 0; i < n; i++) {
		if ((a[i] == ' ' && a[i + 1] != ' '&& a[i + 1] != '\0') || (a[i] == '\t' && a[i + 1] != '\t')) {
			k++;
		}
	}
	return k+1;
}
int main() {
	char a[200];
	cin.getline(a, 200);
	cout << getwordcount(a);
	return 0;
}