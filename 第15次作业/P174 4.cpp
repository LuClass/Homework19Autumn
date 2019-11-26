#include <iostream>
using namespace std;
struct Course
{
	int coursenumber;
	char coursename;
	enum examtype{num,level};
 } ;
 enum level {A,B,C,D,E};
struct Student
{
	int studentnumber;
	char studentname;
	Course coursenumber;
	union CourseGrade
	{
		char level;
		float num;
	};
 } ;

