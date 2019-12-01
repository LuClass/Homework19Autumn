//（1)
#include <iostream>
#include <string>

using namespace std;

void fun(char *a) {
	for (int i = 0; i < 51 && a[i] != '\0'; ++i) {
		if ('A' <= a[i] && a[i] <= 'Z') {
			a[i] += 'a' - 'A';
		}
	}
}

int main() {
	string s;
	cin >> s;
	//const_cast，用于修改类型的const或volatile属性
	char *a = const_cast<char*>(s.c_str());
	fun(a);
	cout << a << endl;
	//printf_s("%p\n", a);							pointer a
	//cout << static_cast<void*>(a) << endl;		pointer a
	//cout << &a << endl;							point to pointer a
	return 0;

}



//(2)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc,char *argv[]) {
	//优先选用vector作为你的容器类型
	//优先使用标准库，然后是其它库，最后才是“手工打造的代码”
	//The C++ programming language	4th
	//by Bjarne Stroustrup
	vector<string> s;
	for (int i = 0; i < argc; ++i) {
		s.push_back(static_cast<string>(argv[i]));
	}
	sort(s.begin(), s.end());
	for (auto& it : s) {
		cout << it << endl;
	}
	return 0;
}
