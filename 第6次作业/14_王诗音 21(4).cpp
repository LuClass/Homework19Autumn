#include<iostream>
#include<iomanip>
using namespace std;
bool isPrime(unsigned n){
	if(n<2)
		return false;
	if(n==2||n==3||n==5||n==7)
		return true;
	for(unsigned i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
} 

int main(){
	int count=0;
	for(int i=1;i<=498;i++)
	{
		if(isPrime(i)&&isPrime(i+2))
		{
			cout<<setw(3)<<i<<"ºÍ"<<setw(3)<<i+2<<'\t';
			count++;
			if(count%5==0)
				cout<<endl;
		}	
	}
	return 0;
}
