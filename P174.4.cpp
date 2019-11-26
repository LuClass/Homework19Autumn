#include<iostream>
#include<string.h>
using namespace std;
enum type{percent,level};

union mark
{
	int n;
	char ch;
};

struct Course
{
	char num[20];
	char course_name[10];
	type t;		
}; 

struct grade
{
	char xh[20];
	char name[10];
	Course c1;
	mark m;
	grade(char cc[],char nn[],char bianhao[],type t,char x)
	{
		strcpy(xh,cc);
		strcpy(name,nn);
		strcpy(c1.num,bianhao);
		c1.t=t;
		if(t==0)
			m.n=(int)x;
		else
			m.ch=x;
	}	
};

void print_grade(grade stu)
{
	cout<<stu.xh<<" "<<stu.name<<" "<<stu.c1.num<<" "<<stu.c1.t<<" ";
	if(stu.c1.t==0)
		cout<<stu.m.n<<endl;
	else
		cout<<stu.m.ch<<endl;
		
}
int main()
{
grade g1("919106840530","张三","111",level,'A');
	grade g2("919106840531","李四","222",percent,99);
	print_grade(g1);
	print_grade(g2);
	return 0;
}