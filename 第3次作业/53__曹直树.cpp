#include <iostream>
#include <iomanip>

using  namespace std;

int main()
//68页(1)
{
int a;
int  j=31,k;
unsigned int i=2147483648;
 cin>>a;
 
 while(j>=0)
 {
 	k=a&i;
 	cout<<(k>>j--)<<" ";
 	i>>=1;
  }
 
}