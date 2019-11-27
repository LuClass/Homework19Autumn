#include<iostream>
using namespace std;

int minzys(int n){
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return i;
	}
	return 0;
}

int main(){
	int x,a,b;
	cin>>x;
	a=x;
	if (!minzys(x))
		cout<<x<<"="<<x<<endl; 
	else
	{
		cout<<x<<"=";
		while(minzys(a)){
			cout<<minzys(a)<<"*";
			a/=minzys(a);
		}
		cout<<a<<endl;
	}
	return 0;
} 
