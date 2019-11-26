11.(1)
#include <iomanip>
#include <iostream>
using namespace std;
int main ()
{
	int a;
	int j=31,k;
	unsigned int i=2147483648;
	cin>>a;
	while(j>=0)
	{
		k=a&i;
		cout<<(k>>j--)<<" ";
		i>>=1;
	}
	return 0;
}

11.(6)
#include <iostream>
#include <math.h>
using namespace std;
int main (void)
{
	double a,b,c,t,x,x1,x2;
	cin>>a>>b>>c;
	a*x*x+b*x+c==0;
	t=b*b-4*a*c;
	x1=(-b+sqrt(t))/(2*a),x2=(-b-sqrt(t))/(2*a);
	if(t>0){
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;}
	else if(t==0)
	cout<<"x1=x2="<<x1<<endl;
	else
	cout<<"нч╦Ы"<<endl;
	return 0; 
}


