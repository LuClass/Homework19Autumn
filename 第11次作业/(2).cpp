using namespace std;
#include <iostream>
int main()
{
	int num;
	cout<<"输入一个整数：";
	cin>>num;
	int n,m;
	n=num;
	m=0;
	while(n!=0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(m==num) cout<<"该数是回文数。";
	if(m!=num) cout<<"该数不是回文数。";
	return 0;
}
