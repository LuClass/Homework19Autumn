#include<iostream>
using namespace std;

bool judge(int a){
	int i;
	if(a==2||a==3||a==5) return true; 
	for(i=2;i*i<=a;i++){
		if(a%i==0) return false;
	}
	return true;
}

int main(){
	int i;
	int m1=3,m2=5;
	cout<<m1<<" "<<m2<<endl;
	for(i=6;i<=500;i++){
		if(judge(i)){
			m1=m2;
			m2=i;
			if(m2-2==m1)
				cout<<m1<<" "<<m2<<endl;
		}
	}
	return 0;
}
