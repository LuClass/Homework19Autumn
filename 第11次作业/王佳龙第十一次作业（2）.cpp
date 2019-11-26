#include <iostream>
using namespace std;
bool f(int n){
    int a,b,i=1,j=0,m;
	m=n;
	while(1){
		n=n/10;
		if(n==0)
		break;
		i=i*10; 
	}
	n=m;
	while(1){
		a=n%10;
		n=n/10;
		j=j+a*i;
		i=i/10;
		if(n==0)
		break;
	};
	if(m==j)
	return true;
	else
	return false;
}
int main(){
	int n;
	cin>>n;
	if(f(n))
	cout<<"是回文数"<<endl;
	else
	cout<<"不是回文数"<<endl; 
}

