#include<iostream>
using namespace std;

bool sushu(int n){
	int i;
	if(n==2||n==3||n==5||n==7)
	    return true;
	for(i=2;i*i<=n;i++){
		if(n%i==0)
		    return false;
	}
	return true;
}

int add(int a){
	int count=0;
	while(a!=0){
		count+=a%10;
		a/=10;
	}
	return count;
}

bool smith(int n){
	if(sushu(n))
	    return false;
	int total=0;
	int t;
	t=n;
	for(int i=2;i<=n;i++){
		if(sushu(i)){
			while(t%i==0){
				total+=add(i);
				t/=i;
			}
		}
		if(t==1) break;
	}
	if(add(n)==total)
	    return true;
	else
	    return false;
}

int main(){
	int n;
	cin>>n;
	if(smith(n))
	    cout<<"yes"<<endl;
	else
	    cout<<"no"<<endl;
	for(int i=4937775;;i++){
		if(smith(i)){
			cout<<i;
			break;
		}
	}
	return 0;
}
