//(1)
#include <iostream>
using namespace std;

char* strcat1(char* dest, const char* src) {
	if (dest == nullptr || src == nullptr)throw "error";
	int i, j;
	i = j = 0;
	while (dest[i] != '\0')++i;
	while (src[j] != '\0') {
		dest[i] = src[j];
		++i; ++j;
	}
	dest[i] = '\0';
	return dest;
}

int main() {
	char a[1 << 10] = "114514";
	const char* b = "1919810";
	cout << strcat1(a, b);
	return 0;
}





//(2)
#include <bits/stdc++.h>
using namespace std;

void trim(char a[]) {
	//two pointers
	int i = 0;
	int j = 1;
	while (a[j] != '\0') {
		if (a[i] == '\x20' && a[j] == '\x20') {
			++j;
		}
		else if (a[i] == '\x20' && a[j] != '\x20') {
			a[i++] = a[j];
			a[j++] = '\x20';
		}
		else {
			++i; ++j;
		}
	}
	a[i] = '\x20';
}

int main() {
	char a[] = "  114 514   1919810   ";
	trim(a);
	cout << a << endl;
	return 0;
}