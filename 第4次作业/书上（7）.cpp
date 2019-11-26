#include <iostream>
using namespace std;
int main ()
{
	cout<<"1/2"<<endl;
	int a=3,b=2,j=1,c;
	while(j<=20){
		cout<<a<<'/'<<b<<' '<<a<<' '<<b<<endl;
		j+=1;
		c=b;
		b=a;
		a=a+c;
	}
	cout<<endl;
	return 0;
}
