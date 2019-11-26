#include<iostream>
using namespace std;
int daoxu(int n)
{
	int t=1;
	while(n/t)
		t*=10;
	t/=10;
	if(t==1) return n; 
	return daoxu(n%t)*10+n/t;
}
int main()
{
	int m,n;
	cin>>n;
	cout<<daoxu(n);
	return 0;
 } 
