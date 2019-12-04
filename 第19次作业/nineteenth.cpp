//14(6)
#include <iostream>
#include <string>
#define MAX 50
using namespace std;
int cnt;
string s;

//Master theorem	T(n)=2T(n/2)+O(n) = O(nlogn)
void mergeSort(char a[], int left, int right, char tmp[]) {
	if (left < right) {
		//avoid overflow
		int m = left + ((right - left) >> 1);
		mergeSort(a, left, m, tmp);
		mergeSort(a, m + 1, right, tmp);
		int i = left; int j = m + 1;
		int t = 0;
		while (i <= m || j <= right) {
			if (j > right || (i <= m && a[i] <= a[j])) {
				//tmp[t++] = a[i++];
				*(tmp + t) = *(a + i);
				++t; ++i;
			}
			else {
				//tmp[t++] = a[j++];
				*(tmp + t) = *(a + j);
				++t; ++j;

				cnt += m - (i - 1);
			}
		}
		t = 0;
		while (left <= right) {
			//a[left++] = tmp[t++];
			*(a + left) = *(tmp + t);
			++left; ++t;;
		}
	}
}

int getRev(char a[]) {
	return cnt;
}

int main() {
	while (cin >> s) {
		cnt = 0;
		char* tmp = new char[s.length()];
		char* a = (char*)s.c_str();
		/*
		1145141919810
		30
		0111111445899
		*/
		mergeSort(a, 0, s.length() - 1, tmp);
		cout << getRev(a) << endl;
		cout << a << endl;
	}
	return 0;
}




//14(8)
//https://www.wsj.com/articles/anxiety-looks-different-in-men-11564494352	Anxiety Looks Different in Men
#include <iostream>
#include <string>
using namespace std;
char a[1 << 20];
int getWordCount(char a[]) {
	int cnt = 1;
	for (int i = 0; a[i] != '\0'; ++i) {
		//Space 32    Horizontal Tab 9    Vertical Tab 12
		//if (a[i] == '\x20' || a[i] == '\x9' || a[i] == '\xB')++cnt;
		//while (a[i] == '\x20' || a[i] == '\x9' || a[i] == '\xB')++i;
		if (*(a+i) == '\x20' || *(a + i) == '\x9' || *(a + i) == '\xB')++cnt;
		while (*(a + i) == '\x20' || *(a + i) == '\x9' || *(a + i) == '\xB')++i;
	}
	return cnt;
}

//People who are panickyand have a desire to escape from a situation they perceive to be intolerable, that could be the spark to act on their[suicidal] thoughts
//27
int main() {
	string s;
	getline(cin, s);
	char* a = (char*)s.c_str();
	cout << getWordCount(a) << endl;
	return 0;
}