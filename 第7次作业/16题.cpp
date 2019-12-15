#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"请输入两个整数"<<endl;
	cin>>a>>b;
	if (a<b){
	   temp = b;
	   b = a;
	   a = temp;
}
	int n1 = a;
	int n2 = b;
	while(n2!=0){
		temp = n1%n2;
		n1 = n2;
		n2 = temp;
	}
	cout<<"最大公约数为"<<n1<<endl;
	cout<<"最小公倍数为"<<a*b/2<<endl;
	return 0;
	   
	  
	  

} 
