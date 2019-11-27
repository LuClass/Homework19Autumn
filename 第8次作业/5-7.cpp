#include<iostream>
using namespace std;

void nixu(int a){
	while(a!=0){
		cout<<a%10;
		a/=10;
	}
}

int main(){
	int a;
	cin>>a;
	nixu(a);
	return 0;
}
