#include<iostream>
#include<math.h>
using namespace std;
/*
 *黄海浪 9181040G0818
 *2019.11.23
 *第 15 次作业
 */
int gcd(int a,int b) {
	return a?gcd(b%a,a):b;
}

struct Fraction {
	int a,b;
	Fraction() {}
	Fraction(int a1,int b1):a(a1),b(b1) {
		if(b<=0) throw "denominator is not standardized";
		jh();
	}
	void jh() {
		if(a==0) {
			b=1;
			return;
		}
		int g = gcd(a,b);
		a/=g;
		b/=g;
	}
	Fraction operator+ (const Fraction &tmp) {
		int bb = b*tmp.b;
		int aa = a*tmp.b+tmp.a*b;
		Fraction fc(aa,bb);
		fc.jh();
		return fc;
	}
	Fraction operator- (const Fraction &tmp) {
		int bb = b*tmp.b;
		int aa = a*tmp.b-tmp.a*b;
		Fraction fc(aa,bb);
		fc.jh();
		return fc;
	}
	Fraction operator* (const Fraction &tmp) {
		int bb = b*tmp.b;
		int aa = a*tmp.a;
		Fraction fc(aa,bb);
		fc.jh();
		return fc;
	}

	Fraction operator/ (const Fraction &tmp) {
		if(tmp.a==0) throw "denominator is not standardized";
		int bb = b*tmp.a;
		int aa = a*tmp.b;
		Fraction fc(aa,bb);
		fc.jh();
		return fc;
	}

	bool operator< (const Fraction &tmp) {
		return (a*1.0/b) < (tmp.a*1.0/tmp.b);
	}
	bool operator> (const Fraction &tmp) {
		return (a*1.0/b) > (tmp.a*1.0/tmp.b);
	}

	bool operator == (const Fraction &tmp) {
		return fabs( (a*1.0/b) - (tmp.a*1.0/tmp.b) ) < 1e-8;
	}

};

ostream& operator<< (ostream &out,Fraction &tmp) {
	tmp.jh();
	cout<<tmp.a<<"/"<<tmp.b;
	return out;
}

//指针测试
Fraction * getMult (Fraction *tmp1,Fraction *tmp2) {
	int bb = tmp1->b*tmp2->b;
	int aa = tmp1->a*tmp2->a;
	Fraction *fc = new Fraction();
	fc->a = aa;
	fc->b = bb;
	fc->jh();
	return fc;
}

enum khfs {per,gra};

struct course {
	string course_id,name,way;
};
struct stucj {
	string id,name,course_id,grade;
};

int main() {
//	Fraction t1(2,12),t2(12,31);
//	Fraction tmp;
//	tmp = t1+t2;
//	cout<< tmp;
//	tmp = t1-t2;
//	cout<< tmp;
//	tmp = t1*t2;
//	cout<< tmp;
//	tmp = t1/t2;
//	cout<< tmp;
//
	Fraction *tmp1,*tmp2;
	tmp1 = new Fraction();
	tmp2 = new Fraction();
	tmp1->a = 12;
	tmp1->b = 32;
	tmp2->a = 2;
	tmp2->b = 3;
	Fraction *tt = getMult(tmp2,tmp2);
	cout<<*tt;
	return 0 ;
}
