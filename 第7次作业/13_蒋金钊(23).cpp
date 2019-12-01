#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"please input the length and width of the parallenlogram:";
	cin>>x>>y;
	for(int i=0;i<x;i++){
		for(int z=0;z<i;z++){
			cout<<" ";
		}
		for(int j=0;j<y;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=x-1;i>=0;i--){
     	for(int z=i;z>0;z--){
			cout<<" ";
		}
		for(int j=0;j<y;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
} 
