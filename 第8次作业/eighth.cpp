//21 (6)
#include <iostream>
#include <cmath>
using namespace std;

//gcd(a,0)=a,
//gcd(a.b)=gac(b,a mod b)
int EUCLID(int a, int b) {
	int tmp;
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int LCM(int a, int b) {
	//more efficient and can avoid overflow
	int tmp = a / EUCLID(a, b);
	return abs(tmp * b);
}

int main() 
{
	int a, b;
	cin >> a >> b;
	cout << EUCLID(a, b) << "\x20" << LCM(a, b) << endl;
	return 0;
}



//21 (7)
#include <iostream>
#include <string>
//#include <algorithm>
//#include <iterator>
using namespace std;

void reverse_inductive(string s) {
	for (int i = s.length() - 1; i > -1; i--) {
		cout << s[i];
	}
	//std::vector::crbegin	Returns a const_reverse_iterator
	/*string c;
	copy(s.crbegin(), s.crend(), back_inserter(c));
	for (int i = 0; i < c.length(); i++) {
		cout << c[i];
	}*/
}

void reverse_recursion(string s) {
	if (s.length() == 1) {
		cout << s[0];
		return;
	}
	else {
		reverse_recursion(s.substr(1,string::npos));
		cout << s[0];
		return;
	}
}
int main() {
	string s;
	cin >> s;
	/*
	114514
	415411
	415411*/
	reverse_inductive(s);
	cout << endl;
	reverse_recursion(s);
	cout << endl;
	return 0;
}
