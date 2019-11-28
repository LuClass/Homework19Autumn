#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"请输入一个整数：";
	cin>>n;
	while(n!=0)
	{
		cout<<n%10;
		n=n/10;
	}
}

