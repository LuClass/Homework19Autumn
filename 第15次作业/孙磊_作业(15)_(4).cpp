#include<iostream>
using namespace std;

enum Method{
	hundredMethod,
	levelMethod
};

struct Course{
	char cosNum[10];
	char cosName[5];
	Method m;
};

union GradeType{
	double grade;
	char level;
};

struct Student{
	char stuNum[10];
	char stuName[8];
	Course course;
	GradeType grade;
};
int main(){
	return 0;
} 
