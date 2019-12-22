#include <iostream>	
using namespace std;
char* strcat(char* a, char* b) {
	int i = 0, j = 0;
	for (; a[i]; i++);
	for (; b[j];i++,j++) {
		a[i] = b[j];
	}
	return a;
}
int main() {
	char* a, * b, a1[10] = {}, b1[10] = {};
	cin.getline(a1, 10);
	cin.getline(b1, 10);
	a = a1;
	b = b1;
	cout << strcat(a,b);
	return 0;
}
