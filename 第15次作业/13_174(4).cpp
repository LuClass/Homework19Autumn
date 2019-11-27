#include<iostream>
using namespace std;
#include<string>

enum AssessmentMethod{
	percentage,grade
};

struct Course{
	string courseNumber;
	string courseName;
	AssessmentMethod am;
};

union mark{
	int percentileScore;
	char grade;
};

struct StudentGrade{
	string studentNumber;
	string studentName;
	Course c;
	mark m;
	StudentGrade(string studentNumber,string studentName,Course c,char score){
		this->c = c;
		this->studentNumber = studentNumber;
		this->studentName = studentName;
		if(c.am == percentage){
			this->m.percentileScore = (int)score;
		}
		else if(c.am == grade){
		      this->m.grade = score;
		}		
	}
	void print(){
		
		cout<<this->studentNumber<<" "<<this->studentName<<" |"<<this->c.courseNumber<<" "<< this->c.courseName<<"| ";
		if(c.am  == percentage){
			cout<<this->m.percentileScore<<endl;
			
		}
		else if(c.am == grade){
			cout<<this->m.grade<<endl;
		}
	}
}; 

int main(){
	Course cpp;
	cpp.courseName = "c++ programe design";
	cpp.courseNumber = "0600334";
	cpp.am = percentage;
	Course cpp_cd;
	cpp_cd.courseName = "c++ curriculum design";
	cpp_cd.courseNumber="0677703";
	cpp_cd.am = grade;
	StudentGrade stg1 = StudentGrade("917116150644","Jack",cpp,90);
	StudentGrade stg2 = StudentGrade("917106550103","May",cpp_cd,'B');
    stg1.print();
    stg2.print();
	return 0;
} 
