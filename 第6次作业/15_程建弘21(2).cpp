/*
(2)编写一个函数，计算组合数： C(n, k) =n! / (k!× (n-k)!)，
其中 n， k 为正整数，且 n >k。
分别求出 C(4，2)， C(6， 4)， C(8， 7)的组合数。
*/ 

#include<iostream>
using namespace std;
int jiechen(int m){
	if(m==1){
		return 1;
	}
	return m*jiechen(m-1);
} 
int main(){
	int n,k;
	
	cout<<"C(4，2)= "<<jiechen(4)/(jiechen(2)*jiechen(2))<<endl;
	cout<<"C(6，4)= "<<jiechen(6)/(jiechen(4)*jiechen(2))<<endl;
	cout<<"C(8，7)= "<<jiechen(8)/(jiechen(7)*jiechen(1))<<endl;
	
	//交互计算 
	cout<<"请输入你要计算的组合数C(n,k)的n与k"<<endl;
	cin>>n>>k;
	cout<<endl;
	cout<<"C("<<n<<","<<k<<")= "<<jiechen(n)/(jiechen(k)*jiechen(n-k));
	
} 
