#include <iostream>
using namespace std;
int f(int a){
	int b,i=1;
	while(1){
	i*=10;
	b=a/i;
	if (b==0)
	break;
	}
	return i/10;
}
int g(int a){
	int b,count =0;
	for (int i=1;a/i>0;i*=10){
	b=((a/i)%10)*(f(a)/i);
	count +=b;
	}
if (count==a)
cout<<"It is right"<<endl;
else
cout<<"It is wrong"<<endl;
}
int input(int a){
	while(cin>>a)
	g(a);
}
int main (){
	int a;
input(a);
}
