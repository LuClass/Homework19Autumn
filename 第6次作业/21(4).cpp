using namespace std;
#include <iostream>
#include <math.h>
bool isPrime(int x){
	if(x<2)
	return false;
	else
	{
		for(int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			return false;
		}
		return true;
	}
}
void twinPrime(int n){
	for(int j=0;j<=n-2;j++)
	{
		if(isPrime(j)&&isPrime(j+2))
		cout<<j<<" "<<j+2<<endl;
	}
}
int main(){
	twinPrime(500);
	return 0;
}
