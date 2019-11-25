#include<iostream>
using namespace std;
int main(){
	char x[51];
	int i;
	cin.getline(x,50);
	for(i=0;x[i];i++){
		cout<<x[i];
		if(x[i]>='A'&&x[i]<='Z'){
			x[i]+=32;
		}
	}
	cout<<endl;
	cout<<x;
}
