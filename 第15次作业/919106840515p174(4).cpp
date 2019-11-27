#include<iostream>
#include<iomanip>
using namespace std;

union Grade
{
	float percent;
	char level;
};

struct course
{
	char coursenum,title,mode;
};

enum mode
{
	percent,level
}; 

enum level
{
	A,B,C,D,E
};

struct stuinf
{
	char stunum[20],name[15],title[20],mode[2];
};

void printinf(stuinf stucard)
{
	cout<<setw(5)<<stucard.stunum<<setw(20)<<stucard.name<<setw(20)<<stucard.title;
	cout<<setw(20)<<(stucard.mode==0?"百分制":"等级制")<<endl;
}

void print1(stuinf stucard[],int n)
{
	for(int i=0;i<n;i++)
	printinf(stucard[i]);
}


int main()
{
	cout<<setw(5)<<"学号"<<setw(20)<<"姓名"<<setw(20)<<"课程名称"<<setw(20)<<"考核方式"<<endl; 
	stuinf stulist[20]={{"001","张三","高等数学",'1'}, 
	                    {"002","李四","线性代数",'0'},
				        {"003","王五","C++",'1'}};
	print1(stulist,3);
}

