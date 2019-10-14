#include <iostream>;
using namespace std;
int main() {
	cout << "输入若干个字符，统计输出的数字个数。" << endl;
	char ch = 0;
	int count = 0;
	for (;ch != '\n'; ) {
		ch = cin.get();
		if (ch < 48 || ch>57)continue;
		count++;
	}
	cout << "数字个数： " << count << endl;
	return 0;
}