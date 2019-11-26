using namespace std;
#include <iostream>
int fanxu(int num)
{
	int a,b;
	a=num%10;
	cout<<a;
	b=num/10;
	if(b==0)	return 0;
	else fanxu(b);
 } 
 int main()
 {
 	int num;
 	cin>>num;
 	fanxu(num);
 	return 0;
 }
