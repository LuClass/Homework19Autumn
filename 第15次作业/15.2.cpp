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
 	char coursenum,title,way;
 };

 enum way
 {
 	percent,level
 }; 

 enum level
 {
 	A,B,C,D,E
 };

 struct stu
 {
 	char stunum[20],name[15],title[20],way[2];
 };

 void printf(stu stucard)
 {
 	cout<<setw(4)<<stucard.stunum<<setw(20)<<stucard.name<<setw(20)<<stucard.title<<setw(20)<<(stucard.way==0?"百分制":"等级制")<<endl;
 }

 void print(stu stucard[],int n)
 {
 	for(int i=0;i<n;i++)
 	printf(stucard[i]);
 }


 int main()
 {int n;
 	cout<<setw(5)<<"学号"<<setw(20)<<"姓名"<<setw(20)<<"课程名称"<<setw(20)<<"考核方式"<<endl; 
 	stu stulist[20]={"001","xxx","yyy",'1'};
	 print(stulist,1);
 	return 0;
 }
