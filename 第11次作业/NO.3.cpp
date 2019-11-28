#include <iostream>
using namespace std;
bool wanquanshu(int n){
	int sum1=0;
	for (int j=1; j<=n/2; j++){
	   if (n%j==0){
		sum1+=j;
	   }
	}
	return n==sum1? 1:0; 
}
int main(){
	int  num1,num2;
	int m;
	cin>>num1>>num2;
    while (num1<=num2){
	   if (wanquanshu(num1)){
	   cout<<num1<<" "<<endl;
	   }
	   num1++;
	}
	 return 0;
}
