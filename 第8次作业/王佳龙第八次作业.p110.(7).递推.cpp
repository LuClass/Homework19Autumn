#include <iostream>
using namespace std;
unsigned f(unsigned a){
	unsigned b,c;
	while(1){
    b=a/10;
	c=a%10;
	cout<<c<<"";
	if(b==0)
	break;
	a=b;
}
cout<<endl;
}
int main(){
	unsigned a;
	cout<<"输入一个整数"<<endl;
	cin>>a;
	f(a);
}
