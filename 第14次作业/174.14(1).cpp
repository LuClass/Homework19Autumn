#include<iostream>
using namespace std;
#include<math.h>

typedef struct  _solution_of_equation{
	
	bool haveSolution;
	int numOfSolution;
	float solution1;
	float solution2;
	
}Soe;

Soe f(int a,int b,int c){
	Soe s;
	float z = b*b -4*a*c;
	if(z<0){
		s.haveSolution = false;
		s.numOfSolution = 0;
		s.solution1 = s.solution2 = -1;
	}
	else if(z==0){
		 s.haveSolution = true;
		 s.numOfSolution = 1;
		 s.solution1 = s.solution2 = -b/2/a;
		
	}
	else{
		s.haveSolution = true;
		s.numOfSolution = 2;
		s.solution1 = (-b + sqrt(z))/2/a;
		s.solution2 = (-b - sqrt(z))/2/a;
	}
	return s;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	Soe s = f(a,b,c);
	cout<<s.haveSolution<<endl;
	cout<<s.numOfSolution<<endl;
	cout<<s.solution1<<endl;
	cout<<s.solution2;
	return 0;
}
