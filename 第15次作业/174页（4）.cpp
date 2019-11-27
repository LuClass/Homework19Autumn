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
 	Course l;
 	mark m;
    grade(char cc[],char n[],char serialnum[],type t,char x){
      strcpy(stnum,cc);
 	  strcpy(name,n);
   	  strcpy(l.num,serialnum);
 	  l.t=t;
      if(t==0)
 		m.a=(int)x;
 	  else
 		m.ch=x;
 	}	
 };
 void de(grade a){
 	cout<<a.stnum<<" "<<a.name<<" "<<a.l.num<<" "<<a.l.t<<" ";
 	if(a.l.t==0)
 		cout<<a.m.a<<endl;
 	else
 		cout<<a.m.ch<<endl;
 }
 int main(){
     grade a("001","ZZ","567",level,'A');
     grade b("056","YY","256",percent,90);
 	de(a);
 	de(b);
 } 
