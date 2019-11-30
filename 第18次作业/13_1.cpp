#include<iostream>
using namespace std;


char* m_strcat(char* s1, const char* s2) {
	int len1 = 0;
	int len2 = 0;


	for (int i = 0; s1[i] != '\0'; i++) {
		len1++;
	}
	for (int i = 0; s2[i] != 0; i++) {
		len2++;
	}
	for (int i = 0; i < len2; i++) {
		s1[i + len1] = (s2[i]);
	}
	s1[len1 + len2] = '\0';

	return s1;

}

int main() {
	char s1[20] = "Happy ";
	char s2[10] = "Everday";
	cout << s1 << endl;
	m_strcat(s1, s2);
	cout << s1;
	system("pause");
	return 0;
}