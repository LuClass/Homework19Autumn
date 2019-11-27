using namespace std;
#include <iostream>
int main(void)
{
	long int i;
	long int bonus,a,b,c,d,e;
	cin>>i;
	a=100000*0.1;
	b=a+100000*0.075;
	c=b+200000*0.05;
	d=c+200000*0.03;
	e=d+400000*0.015;
	if(i<=100000)
	 bonus=i*0.1;
	 else if(i<=200000)
	  bonus=a+(i-100000)*0.075;
	  else if(i<=400000)
	   bonus=b+(i-200000)*0.05;
	   else if(i<=600000)
	    bonus=c+(i-400000)*0.03;
	    else if(i<=1000000)
	     bonus=d+(i-600000)*0.015;
	     else
	      bonus=e+(i-1000000)*0.01;
	cout<<"bonus="<<bonus;
	return 0;      
}
