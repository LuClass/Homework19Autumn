#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char a[5][20]={ "sdafad","reiuj","akldfj","asdjkf","reiujdf" };
	char temp[20]={};
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (strcmp(a[i], a[j]) == 1) {
				strcpy_s(temp, a[i]);
				strcpy_s(a[i], a[j]);
				strcpy_s(a[j], temp);
			}
		}
	}
	for (auto y : a)
		cout << y << endl;
}