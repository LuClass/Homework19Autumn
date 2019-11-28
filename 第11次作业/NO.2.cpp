#include <iostream>
using namespace std;
int size(long long i){
	int count=0;
	while (i>0){
		i/=10;
		count++;
	}
	return count;
}
int main(){
	long long n;
	int a;
	int b=1;
	cin>>n;
	a=size(n);
	long long k=1;
    while(b<a){
    	k=k*10;
    	b++;
	}
    if (n/k!=n%10){
		cout<<"it is not a huiwen number"<<endl;
	}
	int count2=10;
    for (int j=1;j<a/2;j++){
    	int num1,num2;
    	
    	num1=(n/(k/10))%10;
    	num2=(n/count2)%10;
    	k=k/10;
    	count2=count2*10;
    	if (num1!=num2){
    		cout<<"it is not a huiwen number!";
    		return 0;
    	}
  	}
	cout<<"it is a huiwen number!";
	return 0;
}
	
	

