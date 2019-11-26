#include <iostream>
using namespace std;
int main()
{
	int i,j,sum=0;
	cin>>i>>j;
	if(i>=j)
	   return false;
	else
	   for(int a=i;a<=j;a++)
	   {
		   for(int b=1;b<a;b++) 
			  {
			  if(a%b==0)
	             {
	             sum+=b; 
				 }
			  }
			  if(sum==a)
	          cout<<a<<' ';
	          sum=0;
	   }
	      
}
