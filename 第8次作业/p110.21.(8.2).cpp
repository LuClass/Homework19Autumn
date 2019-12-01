#include<iostream>
using namespace std;
int main(){
	int remainer(int i);
	int x;
	cin>>x;
	remainer(x);
}
int remainer(int i){
	if(i==0)
		cout<<0; 
	else if(i>0&&i<10)
		cout<<i;
	else{	
		cout<<i%10;
		remainer(i/10);				
	}
}
	
