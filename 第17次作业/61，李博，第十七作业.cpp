1.
#include<iostream>
using namespace std;
void toupper(char *s) {
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'A'&&s[i] <= 'Z') {
			s[i] = s[i] + 'a' - 'A';
		}
	}
}
int main(){
	char s[100];
	cin.getline(s,100);
	toupper(s);
                cout << s;
	return 0;
}
//2.
#include<iostream>
#include<string>
using namespace std;
void bubbleSort(char * strs[], int n) {
	char *temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (strcmp(strs[j], strs[j + 1]) > 0) {
				temp = strs[j];
				strs[j] = strs[j + 1];
				strs[j + 1] = temp;
			}
		}
	}
}
int main(int argc, char* argv[]) {
	bubbleSort(argv, argc);
	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
	return 0;
}
