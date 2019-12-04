#include <iostream>
using namespace std;
int main(){
	int n,i,j,temp,a,b,c;
	cin>>i>>j;
	if(i==j)
		cout<<"ERROR"<<endl;
	if(i>j){
		temp=j;
		j=i;
		i=temp;
	}
	if(i<100&&j>=1000){
		for(n=100;n<1000;n++){
			a=n/100;
			b=n%100/10;
			c=n%10;
			if(n==a*a*a+b*b*b+c*c*c)
				cout<<n<<" ";
		}
	}
	if(i<100&&j<1000){
		for(n=100;n<j;n++){
			a=n/100;
			b=n%100/10;
			c=n%10;
			if(n==a*a*a+b*b*b+c*c*c)
				cout<<n<<" ";
		}
	}
	if(i>=100&&j>1000){
		for(n=100;n<1000;n++){
			a=n/100;
			b=n%100/10;
			c=n%10;
			if(n==a*a*a+b*b*b+c*c*c)
				cout<<n<<" ";
		}
	}
	if(i>=100&&j<=1000){
		for(n=i;n<j;n++){
			a=n/100;
			b=n%100/10;
			c=n%10;
			if(n==a*a*a+b*b*b+c*c*c)
				cout<<n<<" ";
		}
	}
	return 0;	
}
