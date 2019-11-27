#include<iostream>
using namespace std;
int jiecheng(int n){
	int ans=1;
	for(int i=2;i<=n;i++)
		ans*=i;
	return ans;
}

int C(int n,int k){
	int c;
	c=jiecheng(n)/(jiecheng(k)*jiecheng(n-k));
	cout<<"C("<<n<<","<<k<<")="<<c<<endl;
	return c;
}

int main()
{	
	C(4,2);
	C(6,4);
	C(8,7);
	return 0;
 } 
