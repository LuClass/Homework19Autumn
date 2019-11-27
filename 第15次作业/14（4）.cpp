#include <iostream>
using namespace std;
enum Test
{
	hundred_point,
	grade_point	
};
struct Course
{
	char number[20];
	string name;
	Test way;
};

union Score
{
	float num;
	char grade_point;
};
struct grade
{
	char number[11];
	string name;
	char course_number[20];
	Score score;
};
int main()
{
	return 0;
}
