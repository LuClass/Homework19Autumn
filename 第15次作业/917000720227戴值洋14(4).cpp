#include <iostream>
using namespace std;

enum Method{
	hundred_sys=0,
	level_sys=0,
};

struct Course{
	char course_num[20];
	string course_name;
	Method way;
};

union score{
	int hundred_score;
	char level_score;
};

struct grade{
	char stu_num[20];
	string stu_name;
	char course_number;
	score stu_score;
};

int main()
{
	return 0;
}

