#include<iostream>
using namespace std;

void reverse(int x){
	int i;
	cout<<"the result is:";
	while(x!=0){
		i = x%10;
		cout<<i;
		x/=10;
	}
	return;
}

int main(void){
	int x;
	cout<<"x = "; 
	cin>>x;
	reverse(x); 
	
	return 0;
}
