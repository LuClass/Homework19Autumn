#include<iostream>
using namespace std;
int gongyueshu(int a,int b)
{
	int t;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b)
	{
		t=b;
		b=a%b;
		a=t;
	 } 
	 return a;
 } 
 
 int gongbeishu(int a,int b)
 {
 	return a*b/gongyueshu(a,b);
 }
 
 int main()
 {
 	int a,b;
	cin>>a>>b;
 	cout<<gongyueshu(a,b)<<endl;
 	cout<<gongbeishu(a,b)<<endl;
 	return 0;
 }
