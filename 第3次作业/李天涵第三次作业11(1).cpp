#include <iostream>
#include <iomanip>
#include <cmath> 
using  namespace std;

int main()
{
int a;
int j=31,k;
unsigned int i=pow(2,31);
 cin>>a;
 
 while(j>=0)
 {
 	k=a&i;
 	cout<<(k>>j--)<<" ";
 	i>>=1;
  }
 
}

