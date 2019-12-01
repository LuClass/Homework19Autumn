#include<iostream>
using namespace std;
int main(){
	int x,i,a;
	cin>>x;
	bool isSmith(int n);
	if(isSmith(x)){
		cout<<"true"<<endl;
	} 
	else
		cout<<"false"<<endl;
		a=4937774;
	while(isSmith(a)==0){
		a=a+1;
	}
	cout<<a;
}
bool isSmith(int n){
	int sum1(int x);
	int sum2(int x);
	if(sum1(n)==sum2(n))
		return true;
	else
		return false;
}
int sum1(int x) {
	int sum=0;
	while(x!=0){
		sum+=(x%10);
		x/=10;
	}
	return sum;
}
int sum2(int x){
	int sum1(int x);
	int i,sum=0;
	for(i=2;i*i<=x;i++){
		if(x%i==0)
		break;
	}
		while(x!=i){
			if(x%i==0){
				x=x/i;
				sum+=sum1(i);
			}
			else break;
		}
	sum+=sum1(x);
	return sum;
}
