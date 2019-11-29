#include <iostream>
#include <math.h>
using namespace std;
struct Fraction {
	unsigned den;
	int num;
}; 

Fraction InputAnFra ( ){	
	Fraction fra;
	cout<<"Input a positive intager as denominator.";
	cin>>fra.den;
	cout<<"Input an intager as numerator.";
	cin>>fra.num;
	return fra;
} 

void getSimplify (Fraction *fra){
	int c; 
	if (fra->num==0)
		cout<<"0/1"<<endl;
	else {
		c=fabs(fra->den)<fabs(fra->num)?fabs(fra->den):fabs(fra->num);
		for (int i=2;i<=c;i++)
			while (fra->den%i==0&&fra->num%i==0){
				fra->den/=i;
				fra->num/=i;
			} 
		cout<<fra->num<<'/'<<fra->den<<endl;
	}
} 

int main ( ){
	Fraction fra=InputAnFra( );
	Fraction *fp=&fra;
	getSimplify(fp);
	return 0;
}
