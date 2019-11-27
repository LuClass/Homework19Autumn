#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	int a = 1,b = 2,c = 3;
	cout<<setw(8)<<a<<"/"<<b<<setw(8);
	a = 3,b = 2,c = 5;
	cout<<a<<"/"<<b<<setw(8);
	int k= 2;
	for(int i=2;i<20;i++,k++){
		if(k==10){
			cout<<endl;
			k=0;
		}
		b = a;
		a = c;
		c = a+b;	
     	cout<<a<<"/"<<b<<setw(8);		
	}
	return 0;
} 
