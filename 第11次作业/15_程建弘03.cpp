#include<iostream>
using namespace std;
void T(int a,int b){
	for(int i=a;i<=b;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			cout<<i<<" ";
		}
	}
}
int main(){
	int i,j;
	cout<<"请输入两个数，求出他们之间的完全数："<<endl;
	cin>>i>>j;
	cout<<"完全数为： "<<endl; 
	T(i,j);
	
}
