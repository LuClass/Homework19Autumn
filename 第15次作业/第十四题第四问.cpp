#include<iostream>
using namespace std;
#include<iomanip>
struct Course {
	char num[10];
	char name[20];
	enum Way{persent,rank};
}; 
union Number{
	char level[3];int n;
};
struct Grade {
	char number[10];char nam[10];char IDc[10];Course q;Number k;
};
void PrintAnCourse(Course *m){

	if(m!=NULL)

	cout<<setw(5)<<m->num<<setw(5)<<m->name<<endl;

}
void f(Grade * emp){
	if (emp==NULL) return;
	cout<<setw (5)<<emp->IDc<<setw(10)<<emp->nam<<setw(5)<<emp->number;
	PrintAnCourse(&emp->q);
}  


int main(){ 

Grade 1={"9191","Tay","13",{"1","program"},{1}};

 	f(&1);

}
