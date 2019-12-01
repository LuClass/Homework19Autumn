#include<iostream>
using namespace std;
#include<string.h>
#include<algorithm>

char * trim(char * s) {
	int len = strlen(s);
	//int sp_num = 0;
	//for_each(s, s + len, [&sp_num](auto ch) {if (ch == ' ') sp_num++; });
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ') {
			char * s1 = &s[i];
			int j = i + 1;
			while (s[j] == ' ') {
				j++;
			}
			for (; j <= len; j++) {
				*s1 = s[j];
				s1++;
			}
		}
		/*if (i == len - sp_num - 1) {
			break;
		}*/
	}
	return s;
}

int main() {
	char s[20] = " adfk ppe ss sl  2";
	cout << s << endl;
	trim(s);
	cout << s << endl;
	system("pause");
	return 0;
}