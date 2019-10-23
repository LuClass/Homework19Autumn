using namespace std;
#include <iostream>
bool twinsnum(int a)
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
 		if(twinsnum(a-2)&&twinsnum(a))
 		cout<<a<<" ";
	 }
	 return 0;
 }
