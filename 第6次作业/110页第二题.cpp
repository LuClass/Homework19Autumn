#include <iostream>
using namespace std;
int jie(int m) 
{
	int t=1;
	for(int i=1;i<=m;i++) 
    t=t*i;
	return t;
}

int main() 
{  int n,k;
	cout<<"please input n, k(n>k) :"<<endl;
	cin>>n>> k;
	cout<<"C(n,k)="<<jie(n)/jie(k) /jie(n-k)<<endl ;
	cout<<endl<<"C(4,2)="<<jie(4) /jie(2) /jie(2) ;
	cout<<endl<<"C(6,4)="<<jie(6) /jie(4) /jie(2) ;
	cout<<endl<<"C(8,7)="<<jie(8) /jie(7) /jie(1) ;
}