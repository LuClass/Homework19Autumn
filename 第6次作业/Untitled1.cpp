#include <iostream>
using namespace std;
long factorial(long a){
	if(a==1)
	return 1;
	else return a*factorial(a-1);
}
int main(){
    long n,k;
    cout<<"依次输入n，k的值且要求n>k"<<endl;
    cin>>n>>k;
    cout<<"c(n,k)="<<factorial(n)/(factorial(k)*factorial(n-k))<<endl;
	 } 
