/*
(4)建立一个结构类型 Course 表示课程，包括课程编号、课程名称、考核方式。建立一个枚举类型表示
两种考核方式：一种是百分制，一种是等级制，即 A、 B、 C、 D、 E。 一门课程只能选其一种考核方式。建
立一个结构类型，表示学生成绩，包括学号、姓名、课程编号、考核成绩。注意，考核成绩的类型应该是一
个联合体，它的一个值要么是一个百分制成绩，要么是一个等级成绩，要根据该课程的考核方式来定。
*/
#include<iostream>
#include<iomanip>
using namespace std;
struct Course{
	char id[10];
	char coursename[20];
	char tool;
};
enum kinds{baifenzhi,dengjizhi};
enum dengji{A=1,B,C,D,E};
union Grade{
	float sd;
	dengji sg;
};
struct student{
	char id[10];
	char name[10];
	char coursename[20];
	kinds kind;
	Grade level;
};
void printlevel(kinds kind,Grade level){
	if(kind==baifenzhi){
		cout<<setw(5)<<level.sd;
	}
	else{
		cout<<setw(5);
		switch(level.sg){
			case 1:cout<<"A";break;
			case 2:cout<<"B";break;
			case 3:cout<<"C";break;
			case 4:cout<<"D";break;
			case 5:cout<<"E";break;			
		};
	}
}
void printstudent(student st[],int n){
	cout<<setw(5)<<"学号"<<setw(10)<<"学生姓名"<<setw(20)<<"课程编号"<<setw(5)<<"考核成绩"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(5)<<st[i].id<<setw(10)<<st[i].name<<setw(20)<<st[i].coursename;
		printlevel(st[i].kind,st[i].level);
		cout<<endl;		
	}
}
int main(){
	
	Course cos[10]={{"001","aaa",'1'},
				  	{"002","bbb",'1'},			
				  	{"003","ccc",'0'},		
				  	{"004","ddd",'1'}};	  
	student st[]={{"001","amy","001",dengjizhi},
				  {"002","bob","001",dengjizhi},			
				  {"003","candy","003",baifenzhi},		
				  {"004","david","003",baifenzhi}};
	st[0].level.sg=A;
	st[1].level.sg=B;
	st[2].level.sd=98;
	st[3].level.sd=92;
	printstudent(st,4);
} 
