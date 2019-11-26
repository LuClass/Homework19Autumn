#include<iostream>
using namespace std;
int  main(){
	int i,j,k;
	cin>>i>>j;
	bool flower(int a);
	if(i>=j)
		cout<<"wrong input";
	else{
		for(k=i;k<=j;k++){
			if(flower(k)==1)
				cout<<k<<endl;
		}
	}
}
bool flower(int a){
	int sum=0,t;
	t=a;
	while(a!=0){
		sum+=(a%10)*(a%10)*(a%10);
		a/=10;
	}
	if(t==sum)
		return true;
	else
		return false;
}
