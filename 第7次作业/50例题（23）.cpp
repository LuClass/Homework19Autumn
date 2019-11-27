#include<iostream>
using namespace std;
int main(){
	int length,width,a,b;
	cin>>length>>width;
	for(b=1;b<=width;b++){
		for(a=1;a<=b-1;a++){
			cout<<" ";
		}
		for(a=1;a<=length;a++){
			cout<<"*";
		}
		for(a=1;a<=width-b;a++){
			cout<<" ";
		}
		cout<<endl;
	}
	for(b=1;b<=width;b++){
		for(a=1;a<=width-b;a++){
			cout<<" ";
		}
		for(a=1;a<=length;a++){
			cout<<"*";
		}
		for(a=1;a<=b-1;a++){
			cout<<" ";
		}
		cout<<endl;
	}
}
