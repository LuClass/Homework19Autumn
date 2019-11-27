//23题
#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int ans = x > 2 ? (x % 2 == 0 ? 1 : 0) : 0;
	if (ans)
		cout << "是" << endl;
	else
		cout << "不是" << endl;
	system("pause");
}
//24题
#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	int ans = abs(x) > 8 ? 1 : 0;
	if (ans)
		cout << "是" << endl;
	else
		cout << "不是" << endl;
	system("pause");
}
//25题
#include<iostream>
using namespace std;
int main() {
	int A = 1 / 3;             //A值为0
	double B = 1 / 3.0;         //B值为0.333333
	int C = 1 % 3;             //C值为1
	int D = 21 / 3;            //D值为7
	system("pause");
}
//26题
#include<iostream>
using namespace std;
int main() {
	int a = 9, b = 9, c = 9;
	int A = a / 2 + b++ - c++;         //A值为4
	int B = a += b + c++;              //B值为27		忽略掉上面的自加和自减
	int C = a -= ++b - c--;            //C值为8			忽略掉上面的自加和自减
	int D = a *= b + c--;              //D值为162		忽略掉上面的自加和自减
	system("pause");
}
//27题
#include<iostream>
using namespace std;
int main() {
	int A = !('5' > '8') || 3 < 9;			//A的值为1
	int B = 6 > 3 + 2 - ('0' - 8);			//B的值为1
	int C = 3 * 5 | 6 << 2;					//C的值为31
	int D = 'a' == 'b' <= 3 & 5;			//D的值为0
	system("pause");
}
//28题
#include<iostream>
using namespace std;
int main(){
	double K, F, C;
	cin >> C;
	F = C * (9 / 5) + 32;
	K = C + 273.15;
	cout << "华氏温度: " << F << endl << "绝对温度: " << K << endl;
	system("pause");
}

