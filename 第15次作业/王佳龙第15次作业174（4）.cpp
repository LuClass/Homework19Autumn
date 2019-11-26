#include <iostream>
#include <string.h>
using namespace std;
enum type{percent,level};
struct Course{
    char num[20];
	char course_name[10];
	type t;		
};
union mark{
	int a;
	char ch;
};
struct grade{
	char stnum[20];
	char name[10];
	Course c1;
	mark m;
    grade(char cc[],char n[],char serialnum[],type t,char x){
        strcpy(stnum,cc);
		strcpy(name,n);
     	strcpy(c1.num,serialnum);
		c1.t=t;
		if(t==0)
			m.a=(int)x;
		else
			m.ch=x;
	}	
};
void print_grade(grade stu){
	cout<<stu.stnum<<" "<<stu.name<<" "<<stu.c1.num<<" "<<stu.c1.t<<" ";
	if(stu.c1.t==0)
		cout<<stu.m.a<<endl;
	else
		cout<<stu.m.ch<<endl;
}
int main(){
    grade a("919106840535","wangjialong","c++",level,'A');
    grade b("919106840535","wangjialong","c++",percent,61);
	print_grade(a);
	print_grade(b);
} 







