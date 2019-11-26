#include<iostream>
using namespace std;

int main(){
	char str[50];
	cin.getline(str,50);
	cout<<str<<endl;
	for(int i=0;i<50;i++){
		if(str[i]<='Z'&&str[i]>='A'){
			str[i] += 32;
		}
	}
	cout<<str;
} 
