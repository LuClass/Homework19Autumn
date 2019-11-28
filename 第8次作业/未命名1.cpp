#include <iostream>
using namespace std;
int f(int n){
	int a;
	if(n<10){
		cout<<n<<endl;
	}
	a=n%10;
	n/=10;
	cout<<a<<" ";
	f(n);
}

int main(){
	int n;
	cin>>n;
	f(n);
	return 0;
}
