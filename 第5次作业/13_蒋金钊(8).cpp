#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	cout<<setw(2);
	for(int i=1;i<=9;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<"*"<<i<<"="<<i*j;
			cout<<setw(2);
		}
		cout<<endl;
	}
	return 0;
}
