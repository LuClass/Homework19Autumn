#include <iostream>
using namespace std;
int main(void){
int a=1,b=2,c=1,k=1;

cout<<a<<"/"<<b<<endl;
k=2;
	
	cout<<'3'<<"/"<<'2'<<endl;
	k=3;
	while(k>=3&&k<=20)
	{c=a,a=a+b,b=c,k++;
	cout<<a<<"/"<<b<<endl;}
	return 0;
	}
