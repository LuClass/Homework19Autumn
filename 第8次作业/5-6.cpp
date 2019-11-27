#include<iostream>
using namespace std;

int yue(int a,int b){
	int m,n,i;
	if(a==b) 
	    cout<<a;
	if(a>b){
		m=a;
		n=b;
	}
	else{
		n=a;
		m=b;
	}
	for(i=n;i>0;i--){
		if(m%i==0&&n%i==0){
			return i;
		}
	}
}

int bei(int a,int b){
	int m,n,i;
	if(a==b) 
	    cout<<a;
	if(a>b){
		m=a;n=b;
	}
	else{
		n=a;m=b;
	}
	for(i=1;;i++){
		if((i*m)%n==0){
			return i*m;
		}
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<"最小公约数="<<yue(a,b)<<endl;
	cout<<"最大公倍数="<<bei(a,b);
	return 0; 
}


