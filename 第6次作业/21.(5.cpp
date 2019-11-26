#include<iostream>
using namespace std;
int S(int x)
{
	int i;
	for(i=2;i<=x;i++)
	{
		if(x%i==0)
		break;
	}
	if(i>x)
		return 1;
	else 
	return 0;	
}
void f(int x)
{
	if(S(x))
	
	 {cout<<x<<"="<<x;}	
	
	else
	{
		cout<<x<<"=";
	  for(int i=2;i<=x;i++)
	  {
	  	if(x%i==0)
	  	{
	  		x=x/i;
	  		if(x>1)
	  		cout<<i<<"*";
	  		else
	  		cout<<i<<endl;
	  		i--;
		}
	
	  }
	}
}
int main()
{
	int a;
	while((cin>>a)>0)
	{
		f(a);
	}
	return 0;
	

}







