
using namespace std;
#include <iostream>
bool twnum(int a)
{
	int b=a+2;
	int i;
	for(i=2;i<b;i++)
	if(b%i==0)
    return false;
	return true;
 } 
 int main()
 {
 	int a,b,i;
 	for(a=3;a<500;a++)
 	{
 		if(twnum(a-2)&&twnum(a))
 		cout<<a<<" ";
	 }
	 return 0;
 }
