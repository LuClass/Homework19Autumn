#include <iostream>
using namespace  std;
int main()
{
	int i,j,a,b,c;
	cin>>i>>j;
	if(i>=j)
	   return false;
	else
	   for(int k=i;k<=j;k++)
	   {
	   a=k/100;
	   b=k/10%10;
	   c=k%10;
	   if(a*100+b*10+c==a*a*a+b*b*b+c*c*c) 
	   cout<<k<<' ';  
	   }
	return 0;  
}
