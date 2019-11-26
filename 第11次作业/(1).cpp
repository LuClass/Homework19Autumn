using namespace std;
#include <iostream>
bool shuixianhua(int n)
{
	int m=0;
	int x;
	x=n;
	while(x!=0)
	{
		m+=(x%10)*(x%10)*(x%10);
		x=x/10;
	}
	if(n==m) return true;
	return false;
}
int main()
{
	int i,j;
	cin>>i>>j;
	int a;
	for(a=i;a<=j;a++)
	{
		if(shuixianhua(a))
		cout<<a<<" ";
	}
	return 0;
 } 
