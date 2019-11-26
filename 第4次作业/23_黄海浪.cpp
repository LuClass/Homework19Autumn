#include<iostream>
using namespace std;

/*
 *黄海浪 9181040G0818
 *2019.10.11
 *第 4 次作业 
 */

int main() {
	
	{//T11.(4)
		int cnt = 0;
		char c;
		while( cin.get(c) && c!='\n' )
			if( c >= '0' && c <= '9' )
				++cnt;
		cout<<cnt<<endl;
	}
	
	{//T11.(7)
		int a1 = 1 , a0 = 2;
		int b1 = a1+a0 , b0 = 2;
		cout<<a1<<"/"<<a0<<"  ";
		cout<<b1<<"/"<<b0<<"  ";
		for(int i = 3; i <= 20; ++i){
			cout<<b1+b0<<"/"<<b1<<"  ";
			b1 = b1 + b0;
			b0 = b1 - b0;
			if( !(i%5) )  cout<<endl;
		}
	}
	
	{//T11.(8)
		unsigned int n;
		cin>>n;
		for(int i = 1; i*i <= n; ++i){
			if( !(n%i) ){
				if( i == 1 || i*i == n )  cout<<i<<" ";
				else  cout<<i<<" "<<n/i<<" ";	
			}
		}
		cout<<endl;
		//本身除外，故 1 不是 
		for(int i = 2; i <= 100; ++i){
			int sum = 0;
			for(int j = 1; j*j <= i; ++j){
				if( !(i%j) ){
					if( j == 1 || j*j == i) sum += j;
					else sum += j+i/j;
				}
			}
			if(sum == i) cout << i<<" ";
		}
	}

	return 0;
}
