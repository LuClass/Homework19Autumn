21.(2)
#include <iostream>
using namespace std;
unsigned factorial (unsigned n){ 
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
 } 
 int main (){
 unsigned n,k;
  cin>>n>>k;
 if(n>k)
 (n,k)=factorial(n)/(factorial(k)*factorial(n-k));
 cout<<(n,k)<<endl;
 cout<<(4,2)<<" "<<(6,4)<<" "<<(8,7)<<endl;
 	return 0;
 }

(4)
#include <iostream>
#include <iomanip>
using namespace std;
bool isPrime(unsigned n);
int main (){
	for(int i=2;i<498;i++)
	if(isPrime(i)&&isPrime(i+2))
	cout<<setw(10)<<i<<"ºÍ"<<i+2<<'\t';
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

(5)
#include <iostream>
using namespace std;
bool isPrime(unsigned i);
int main ()
{
	unsigned x;
	cin>>x;
	for(int i=1;i<=x;i++)
	
		if(x%i==0)
		if(isPrime(i))
		cout<<i<<" ";
		return 0;
	}
	bool isPrime(unsigned i)
	{
	if(i<2)
	return false;
	if(i==2||i==3||i==5||i==7)
	return true;
	for(int a=2;a*a<=i;a++)
	if(i%a==0)
	return false;
	return true;
}

