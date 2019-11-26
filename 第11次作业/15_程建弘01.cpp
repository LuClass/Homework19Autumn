#include<iostream>
using namespace std;
void T(int a,int b){
	for(int i=a;i<=b;i++){
		if((i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)
		+(i%10)*(i%10)*(i%10)==i){
			cout<<i<<" ";
		}
	}
}
int main(){
	int i,j;
	cout<<"请输入两个数，求出他们之间的水仙花数："<<endl;
	cin>>i>>j;
	cout<<"水仙花数为： "<<endl; 
	T(i,j);
	
} 
