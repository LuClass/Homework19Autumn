#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
	
	int x;
	cout<<"请输入一个整数:";
	cin>>x;
	
	int re[32],i=0;
	memset(re,0,sizeof(re));
	
	bool j = x > 0 ? 0 : 1;
	x=abs(x);
	
    while(x!=0){
    	re[i] = x % 2;
    	i++;
    	x/=2;
	}
	
	cout<<"二进制形式为:0b "<<j<<" ";
	for(i--;i>=0;i--){
		cout<<re[i];
	}
	
	return 0;
} 
