#include <iostream>
using namespace std;
int main()
{
	int a=5,b=3,i=3,c;
	cout<<"1/2 3/2 ";
	for(i=3;i<=20;i++){
		cout<<a<<" / "<<b<<" ";
		c=a;a=a+b;b=c;
	}
return 0;
}
