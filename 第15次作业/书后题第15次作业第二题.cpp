#include <iostream>
using namespace std;
static int a;
enum TestWay { level , grade };

union Score { char a;int b;};

struct Course {
	char cnum[5] , cname[20];
	TestWay t;
};

struct Student {
	char snum[5] ,sname[20];
	Course c;
	Score s;
};

void printTitle ( ){
 	cout<<"学号 姓名 课程编号 成绩"<<endl; 
}

void inputAnStu (Student stu){	
	cout<<"请输入："<<endl;
	cin>>stu.snum>>stu.sname;
	cin>>stu.c.cnum>>a;
	switch (a){
		case 0:	cout<<"请输入A~E的等级成绩：";
				cin>>stu.s.a;
				break;
		case 1: cout<<"请输入百分制成绩:"; 
				cin>>stu.s.b;
				break;
		default:cout<<"Error"<<endl;
	} 
}

void outputAnStu (Student stu){
	cout<<stu.snum<<" "<<stu.sname<<" ";
	cout<<stu.c.cnum<<" ";
	switch (a){
		case 0:	cout<<stu.s.a;
				break;
		case 1: cout<<stu.s.b;
				break;
		default:cout<<"Error"<<endl;
	} 
}

int main ( ){
	Student stu;
	inputAnStu(stu); 
	printTitle( );
	outputAnStu(stu);
	return 0;
}
