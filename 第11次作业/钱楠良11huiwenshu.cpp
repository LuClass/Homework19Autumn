using namespace std;
#include <iostream>
int main()
{
	int x,g,s,b,q,w;
	cout<<"输入一个五位数"<<endl;
	cin>>x;
	g=x%10;
	s=(x/10)%10;
	b=(x/100)%10;
	q=(x/1000)%10; 
	w=(x/10000)%10;
	if(g==w&&s==q)
	cout<<"该数是回文数"<<endl;
	else
	cout<<"该数不是回文数";
	return 0; 
}
