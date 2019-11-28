21.£¨2£©
#include <iostream>
using namespace std;
int wo(int x){ 
	int i,count=1;
	for(i=1;i<=x;i++)
	count*=i;
	return count;
}
double wo(int x,int y)
{
	double a;
	a=wo(x)/(wo(y)*wo(x-y));
	return a;
}

int main() 
{
	cout<<fun(4,2)<<' '<<fun(6,4)<<' '<<fun(8,7);
	return 0;
}
£¨4£©
#include<iostream>
using namespace std;
int main(){
	bool isPrime(unsigned n);
	int i;
	for (i=0;i<=498;i++){
		if(isPrime(i)&&isPrime(i+2))	cout<<i<<" "<<i+2<<endl;	
	}

}
bool isPrime(unsigned n){	
	if (n<2)
		return false;
	if (n==2||n==3||n==5||n==7)	
		return true;
	for (int i=2;i*i<=n;i++)
		if (n%i == 0)
			return false;
	return true;
}
£¨5£©
#include<iostream>
using namespace std;
int f(int x)
{
	int i;
	for(i=2;i<=x;i++)
	if(x%i==0)
	break;
	return i;
} 
 int main()
 {
 	int n;
 	cin>>n;
 	cout<<n<<'=';
    while(n/f(n)!=1)
 	 {cout<<f(n)<<'*';
 	  n=n/f(n);	
	 }
 	cout<<f(n);

 }
