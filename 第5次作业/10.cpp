#include <iostream>;
using namespace std;
int main() {
	cout << "打印楼梯，同时在楼梯上方打印两个笑脸。" << endl;
	cout <<  "*两个笑脸*"<< endl;
	for (int a = 1; a <= 11; a++) {
		for (int b = 1; b <= a; b++) {
			cout <<'\001'<<" ";
		}
		cout << endl;
	}

	return 0;
}