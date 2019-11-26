#include <iostream> 
using namespace std;
int main(){
	int i,j,k;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++)
		cout<<' ';
		    for(int k=1;k<=4;k++)
		cout<<'*';
	cout<<endl; 
	}
	for(int i=1;i<=4;i++){
		for(int j=1;j<=5-i;j++)
		cout<<' ';
		    for(int k=1;k<=4;k++)
		cout<<'*';
	cout<<endl; 
	}
}
