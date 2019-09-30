#include <iostream>
using namespace std;
int main() {
	int a = 9, b = 9, c = 9, A = 0, B = 0, C = 0, D = 0;
	cout  << "理解一：不同main()中的独立语句" << endl;
		A = a /= 2 + b++ - c++;            //A,B,C,D为不同main()中的独立语句。
	a = b = c = 9;
		B = a += b + c++;
	a = b = c = 9;
		C = a -= ++b - c++;
	a = b = c = 9;
		D = a *= b + c--;
	cout << A << endl;                     //输出4
	cout << B << endl;                     //输出27
	cout << C << endl;                     //输出8
	cout << D << endl;                     //输出162

	cout << '\n' << "理解二：同一main()中的语句" << endl;
	a = b = c = 9;                         //A,B,C,D为同一main()中的语句。
	A = a /= 2 + b++ - c++;
	B = a += b + c++;
	C = a -= ++b - c++;
	D = a *= b + c--;
	cout << A << endl;                     //输出4
	cout << B << endl;                     //输出24 a=24,b=10,c=11
	cout << C << endl;                     //输出24 a=24,b=11,c=12
	cout << D << endl;                     //输出552 a=552,b=11,c=11
	
	return 0;
}