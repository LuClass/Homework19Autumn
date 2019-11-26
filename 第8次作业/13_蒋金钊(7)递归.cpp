#include<iostream>
using namespace std;


void reverse(int x){
	if(x==0){
		return ;
	}
	else{
		cout<<(x%10);
		reverse(x/10); 
	}
}

int main(void){
	int x;
	cout<<"x = ";
	cin>>x;
	cout<<"the result is = ";
	reverse(x);
	return 0;
}
