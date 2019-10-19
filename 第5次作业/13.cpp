#include<iostream>
using namespace std;
int main() {
	cout << "打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153 = 1的三次方＋5的三次方＋3的三次方。" << endl;
	cout << "水仙花数：" << endl;
	for (int a = 1,n=1; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			for (int c = 1; c <= 9; c++) {
				n = a * 100 + b * 10 + c;
				if (n == a * a * a + b * b * b + c * c * c)cout << n << endl;
			}
		}
	}
	
	return 0;

}