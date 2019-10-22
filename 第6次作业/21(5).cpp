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
int main(){
	int x;
	cin>>x;
	cout<<x<<"=";
	if(x!=1)
	{
		while(!isPrime(x))
		{
			for(int i=2;i<x/2;i++)
			{
				if(x%i==0)
				{
					x/=i;
					cout<<i<<"*";
					break;
				}
			}
		}
		cout<<x;
	}
	else
	cout<<x;
	return 0;
}
