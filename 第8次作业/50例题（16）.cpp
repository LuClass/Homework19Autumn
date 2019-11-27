#include<iostream>
using namespace std;
int main(){
	int a,b,x,y,t;
	cin>>a>>b;
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	for(x=a;x>=1;x--){
		if(a%x==0){
			if(b%x==0){
				cout<< "Maximum common divisor = "<<x<<endl;
				cout<< "Least common multiple = "<<(a*b)/x;
				break;
			}
		}
	}
}
