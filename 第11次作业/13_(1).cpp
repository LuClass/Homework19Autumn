#include<iostream>
using namespace std;

int main(){
	int i,j;
	cin>>i>>j;
	if(i>j){
		int t = i;
		i = j;
		j = t;
	}
	for(int z = i;z<=j;z++){
		int k = z;
		int sum=0;
		while(k!=0){			
			int a = k%10;
			sum += a*a*a;
			k/=10;
		}
		if(sum==z){
			cout<<z<<" ";
		}
	}
	return 0;
} 
