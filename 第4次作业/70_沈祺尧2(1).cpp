//11 (7)
using namespace std;
#include <iostream> 
int main(void){
	int a=3,b=2;
	cout<<"1/2"<<endl<<"3/2"<<endl;
	for(int n=3;n<=20;n++)
	{
		a=a+b;
		b=a-b;
		cout<<a<<'/'<<b<<endl;
	}
	return 0;
}
