#include <iostream>
using namespace std;
bool prime(long a){
	if(a==1)
	return false;
	if(a>2){
		long i,b,count=0;
		for(i=2;i<=a;i++){
		b=a%i;
		if(b!=0)
		count++;
		else
		break;
		}
		if(count==a-2)
		return true;
		else 
		return false;
	}
}
int main(){
    long m,n,x;
	for(m=1;m<=500;){
	if(prime(m)==1)
	n=m;
	m++;
	for(;prime(m)!=1;m++){
	if (prime(m)==1)
    break;}
    x=m-n;
    if(x==2)
    cout<<n<<"ºÍ"<<m<<"\t";
}
	
}
