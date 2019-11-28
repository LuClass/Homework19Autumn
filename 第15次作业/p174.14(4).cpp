#include<iostream>
using namespace std;
	enum type{percent,level};
struct Course{
	char CID[20];
	char Cname[20];
     type a1;
}; 
union kaohechengji{
	float x;
	char y[2];
};
struct xueshenggrades{
	char xuehao[20];
	char xueshengname[20];
	Course c1;
	kaohechengji m1;
};
void PrintAGrade(xueshenggrades *m){
 	if(m==NULL) return ;
 	cout<<m->xuehao<<"  "<<m->xueshengname<<"  "<<m->c1.CID<<"  "<<m->c1.Cname<<" "<<m->c1.a1<<" ";
 	if(m->c1.a1==0)
 	cout<<m->m1.x<<endl;
 	else
 	cout<<m->m1.y[2]<<endl;
}
int main(){
 	xueshenggrades a={"123","Tom",{"0001","Math"},{90.0}};
 	xueshenggrades b={"124","Jerry",{"0002","CPP"},{'A'}};
 	PrintAGrade(&a);
 	PrintAGrade(&b);
  	return 0;
} 
