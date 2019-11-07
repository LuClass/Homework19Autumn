#include<iostream>
using namespace std;
int  main(){
	int i,j,k;
	cin>>i>>j;
	bool wanquanshu(int x);
	if(i>=j)
		cout<<"wrong input";
	else
		{
		if(i==1)
			cout<<i<<endl;
		for(k=i;k<=j;k++){
			if(wanquanshu(k)==1)
				cout<<k<<endl;
		}
	}
}
bool wanquanshu(int x){
	int i,sum=0;
	for(i=1;i<=x/2;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	if(sum==x)
		return true;
	else
		return false;
	
}
		
