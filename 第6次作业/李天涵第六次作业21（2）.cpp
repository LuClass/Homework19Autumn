using namespace std;
#include <iostream>
double combine(int n,int k)
{
	double a=1.0,b=1.0;
	double s;
	int i;
	for(i=1;i<=n;i++)
	a*=i;
	for(i=1;i<=k;i++)
	b*=i;
	for(i=1;i<=(n-k);i++)
	b*=i;
	s=a/b;
	return s;
 } 
 int main()
 {
 	int n,k;
 	double a;
	cout<<"C(4,2)="<<combine(4,2)<<endl;
	cout<<"C(6,4)="<<combine(6,4)<<endl;
	cout<<"C(8,7)="<<combine(8,7)<<endl; 
 	cin>>n>>k;
 	a=combine(n,k);
 	cout<<a<<endl;
 	return 0;
 }
