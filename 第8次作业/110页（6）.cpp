using namespace std;
#include <iostream>
int main ()
{
	int a,b,c,d,e;
	cout<<"请输入两个数："<<endl;
	cin>>a>>b;
	if(a<b)
	{
		e=a;
		a=b;
		b=e;
	 }
	 d=a*b;
	 c=a%b;
	 while(c!=0)
	 {
	 	a=b;
	 	b=c;
	 	c=a%b;
	  }
	  cout<<"最大公约数："<<b<<endl;
	  cout<<"最小公倍数："<<d/b<<endl;
	  return 0;
}