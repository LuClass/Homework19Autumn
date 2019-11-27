#include<iostream>
#include<math.h>
using namespace std;
enum Exam{percentile,rank};
struct Course {
	string coursenumber;
	string coursename;
	Exam E;
};
union examresult {
	char level;
	float num;
};
struct grade {
	string Sno;
	string name;
	string coursenumber;
	examresult R;
};
int main() {
	grade student1 = { "120","lihua","119" };
	student1.R.level = 'A';
	Course course1 = { "120","life"};
	course1.E = rank;
}


