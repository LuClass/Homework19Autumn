#include <iostream>
#include <string.h>
using namespace std;

enum type{percent,level};

union CourseGrade{
	float num;
	char level;
};

struct Course{
	char num3[20];
 	char CourseName[10];
 	type t;	
}; 

struct Grade{
	char num1[20];
 	char name[10];
 	Course c1;
 	CourseGrade m;
 	Grade(char cc[],char nn[],char num2[],type t,char x)
 	{
 		strcpy(num1,cc);
 		strcpy(name,nn);
 		strcpy(c1.num3,num2);
 		c1.t=t;
 		if(t==0)
 			m.num=(int)x;
 		else
 			m.level=x;
 	}	
};

void print(Grade stu)
{
 	cout<<stu.num1<<" "<<stu.name<<" "<<stu.c1.num3<<" "<<stu.c1.t<<" ";
 	if(stu.c1.t==0)
 		cout<<stu.m.num<<endl;
 	else
 		cout<<stu.m.level<<endl;
}

int main()
{
	Grade g1("001","sam","1",level,'A');
 	Grade g2("002","uel","2",percent,99);
 	print(g1);
 	print(g2);
 	return 0;
}
