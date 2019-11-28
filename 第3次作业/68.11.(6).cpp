using namespace std;
#include <iostream>
int main(void)
{
	cout<<"a*x*x+b*x+c=0"<<endl;
	long double a=0,b=0,c=0,d=0;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"c=";cin>>c;
	d=b*b-4*a*c;
	if(d<0)
		cout<<"无解";
	else if(d==0) 
			cout<<"有一解"; 
		 else
			cout<<"有两解";
	return 0;
}
