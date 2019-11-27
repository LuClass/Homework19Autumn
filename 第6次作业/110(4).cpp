#include <iostream>
using namespace std;
bool isPrime(unsigned n);
int main(){
	int n=3;
	for(int i=2;i<500;i++)
	    if(isPrime(i)){
		   if(n+2==i)
	          cout<<n<<' '<<i<<endl;
	          n=i;
		}     
	return 0;
}
bool isPrime(unsigned n){
	if(n<2)
	   return false;
	if(n==2||n==3||n==5||n==7)
       return true;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
           return false;
    return true;
}
