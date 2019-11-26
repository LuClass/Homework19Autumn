#include<iostream>
using namespace std;
int main(){
	int a=1,b=2;
	for(int i=0;i<20;i++)
	{
		cout<<a<<"/"<<b<<'\t'<<'\t';
		a+=b;
		b+=i;
		if((i+1)%5==0)
			cout<<endl;
	}
	return 0;
} 
