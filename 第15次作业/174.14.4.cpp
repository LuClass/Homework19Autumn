#include <iostream>
#include<iomanip>
using namespace std;
struct Course {
	char id[5], name[20];
};
enum kaohe{a,b};
enum rands{A,B,C,D,E};
union grade { float a; rands b; };
struct student {
	char id[10], name[10], courseid[5]; kaohe kao;
	grade level;
};
void func(kaohe kao, grade level) {
	if (kao == a) {
		cout << setw(5) << level.a ;
	}
	else {
		cout << setw(5);

		switch (level.b) {
		case 0:cout << "A"; break;
		case 1:cout << "B"; break;
		case 2:cout << "C"; break;
		case 3:cout << "D"; break;
		case 4:cout << "E"; break;
		}
	}
}
void func2(student st[], int n) {
	cout << setw(5) << "学号" << setw(10) << "学生姓名" << setw(10) << "课程编号" << setw(10) << "考核成绩" << endl;
	for (int i = 0; i < n; i++) {
		cout << setw(5) << st[i].id << setw(10) << st[i].name << setw(20) << st[i].courseid;
		func(st[i].kao, st[i].level);
		cout << endl;
	}
}
int main() {
	/*Course cos[10] = { {"001","aaa",b},
					{"002","bbb",b},
					{"003","ccc",a},
					{"004","ddd",b} };*/

	student st[] = { {"001","amy","001",a,94},
				  {"002","bob","001",b,0},
				  {"003","candy","003",b,0},
				  {"004","david","003",a ,92} };
	st[1].level.b = B;
	st[2].level.b = A;
	func2(st, 4);
}