#include<iostream>
using namespace std;
int main(){
	bool isPrime(unsigned n);
	int i;
	for (i=0;i<=498;i++){
		if(isPrime(i)&&isPrime(i+2)){
	cout<<i<<" "<<i+2<<endl;
		}
	}
	
}
bool isPrime(unsigned n){	
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 ||n == 7)	
		return true;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

