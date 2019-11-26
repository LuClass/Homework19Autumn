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
	Soe soe;
	float z = b*b -4*a*c;
	if(z<0){
		soe.haveSolution = false;
		soe.numOfSolution = 0;
		soe.solution1 = soe.solution2 = -1;
	}
	else if(z==0){
		 soe.haveSolution = true;
		 soe.numOfSolution = 1;
		 soe.solution1 = soe.solution2 = -b/2/a;
		
	}
	else{
		soe.haveSolution = true;
		soe.numOfSolution = 2;
		soe.solution1 = (-b + sqrt(z))/2/a;
		soe.solution2 = (-b - sqrt(z))/2/a;
	}
	return soe;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	Soe soe = f(a,b,c);
	cout<<soe.haveSolution<<endl;
	cout<<soe.numOfSolution<<endl;
	cout<<soe.solution1<<endl;
	cout<<soe.solution2;
	return 0;
}
