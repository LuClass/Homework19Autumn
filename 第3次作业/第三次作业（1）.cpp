using namespace std;
#include <iomanip> 
#include <iostream>
#include <math.h>
//第十一题第一问 
int main (void)
{
  int a;
  int j=7,k;
  unsigned int i=128;
  cin>>a;
  while(j>=0)
  {
  	k=a&i;
  	cout<<(k>>j--)<<" ";
  	i>>=1;
   } 
  return 0; 
 } 
 
