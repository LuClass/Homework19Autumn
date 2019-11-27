#include <iostream>
using namespace std;
bool flowers(int n){
	int i,a,b,c;
	a=n%10;
	b=(n/10)%10;
	c=n/100;
	return (n==a*a*a+b*b*b+c*c*c)? 1:0;
}
int main(){
	int n,d,e,num1,num2;
	cin>>num1>>num2;
    while(num1<=num2){
    	flowers(num1);
    	if (flowers(num1)==1){
    	e=num1;
    	cout<<e<<endl;
        }
		num1++;
    	}
    return 0;
}

