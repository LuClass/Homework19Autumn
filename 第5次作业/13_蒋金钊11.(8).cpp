#include<iostream>
#include<math.h>

using namespace std;

int main(void){
	int x;
	cout<<"请输入正整数x:";
	cin>>x;
	cout<<"x的因子有:";
	for(int i =1;i<=x;i++){
		if(x%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl<<endl;;
	
	cout<<"1~100的完全数有:";
	for(int i=1;i<=100;i++){
	    int sum = 0;
	    
		for(int j=1;j<=i;j++){
			if(i%j==0&&i!=j){
				sum += j;
			}
		}
		if(sum == i){
			cout<<i<<" ";
		}
	}
	
	return 0;
}
