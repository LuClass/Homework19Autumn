#include<iostream>
#include<math.h>
//#include<string>
using namespace std;
int max(int a, int b) {
	if (a < 0)a = -a; int k = 1;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			if ((i <= b)&&(b%i==0)) {
				k = i;
			}
		}
	}
	return k;
}   
                                      //a,b的最大公约数
struct fra {
	int a, b;
	fra(int x,  int y) :a(x), b(y) {
		if (b == 0)
			throw "分母是0。";
		int t = max(a, b);
		a /= t;
		b /= t;
	}
};
                                      //最简a/b
fra com(fra& f1, fra& f2) {
	if (fabs((double(f1.a) / f1.b)- (double(f2.a) / f2.b))<0.00001)cout << "相等";
	else cout << "较大";
	if (double(f1.a) / f1.b > double(f2.a) / f2.b)return fra(f1.a, f1.b);
	else return fra(f2.a, f2.b);
}
fra add(fra& f1, fra& f2) {
	return fra(f1.a * f2.b + f1.b * f2.a, f1.b * f2.b);
};
fra red(fra& f1, fra& f2) {
	return fra(f1.a * f2.b - f1.b * f2.a, f1.b * f2.b);
};
fra mul(fra& f1, fra& f2) {
	return fra(f1.a * f2.a, f1.b * f2.b);
};
fra div(fra& f1, fra& f2) {
	return fra(f1.a * f2.b, f1.b * f2.a);
};
fra f1 = { 10, 25 };
fra f2 = { 3, 6 };

//fra add_ = { f1.a * f2.b + f1.b * f2.a, f1.b * f2.b };
int main() {
	cout <<"\b\b\b\b"<< com(f1, f2).a << "/" << com(f1, f2).b<< endl;
	cout << add(f1, f2).a << "/" << add(f1, f2).b << endl;
	cout << red(f1, f2).a << "/" << red(f1, f2).b << endl;
	cout << mul(f1, f2).a << "/" << mul(f1, f2).b << endl;
	cout << div(f1, f2).a << "/" << div(f1, f2).b << endl;
}