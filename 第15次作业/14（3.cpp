#include<iostream>
#include<math.h>
using namespace std;

struct Fraction {
	int a;
	int b;
};

void huajian(int * a, int * b) {
	int t=1;                
	for (int i = 2; i < (*a>*b?*a:*b); i++)
	{
		if (*a%i == 0 && *b%i == 0)
			t = i;
	}
	*a = *a / t;
	*b = *b / t;
}

void compare(Fraction f1, Fraction f2) {
	if (f1.a == f2.a&&f1.b == f2.b)
		cout << "f1=f2" << endl;
	if ((double)f1.a / f1.b > (double)f2.a / f2.b)
		cout << "f1>f2" << endl;
	else
		cout << "f1<f2" << endl;
}
void sum(Fraction f1, Fraction f2) {
	int x1 =fabs( f1.a*f2.b + f1.b*f2.a);
	int x2 = f1.b*f2.b;
	huajian(&x1, &x2);
	if (x1 == 0||x1==x2)
		cout << "f1+f2=1" << endl;
	else 
		cout << "f1+f2=" << x1 << "/" << x2 << endl;
}
void subtract(Fraction f1, Fraction f2) {
	int x1 = fabs(f1.a*f2.b -f1.b*f2.a);
	int x2 = f1.b*f2.b;
	huajian(&x1, &x2);
	if (x1 == 0||x1==x2)
		cout << "|f1-f2|=1" << endl;
	else
	   cout << "|f1-f2|=" << x1 << "/" << x2 << endl;
}
void multiply(Fraction f1, Fraction f2) {
	int x1 = f1.a*f2.a;
	int x2 = f1.b*f2.b;
	huajian(&x1, &x2);
	if (x1 == 0||x1==x2)
		cout << "f1*f2=1" << endl;
	else
	    cout << "f1*f2=" << x1 << "/" << x2 << endl;
}
void divide(Fraction f1, Fraction f2) {
	int x1 = f1.a*f2.b;
	int x2 = f1.b*f2.a;
	huajian(&x1, &x2);
	if (x1 == 0||x1==x2)
		cout << "f1/f2=1" << endl;
	else
	    cout << "f1/f2=" << x1 << "/" << x2 << endl;
}
int main() {
	int a1, b1;
	int a2, b2;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	huajian(&a1, &b1);
	huajian(&a2, &b2);
	Fraction f1 = { a1,b1 };
	Fraction f2 = { a2,b2 };
	compare(f1, f2);
	sum(f1, f2);
	subtract(f1, f2);
	multiply(f1, f2);
	divide(f1, f2);
	system("pause");
	return 0;
}
