#include <iostream>
using namespace std;
bool su(unsigned n)
 {
     if(n<2)
       return false;
     if(n==2||n==3||n==5||n==7) 
       return true;
     for(unsigned i=2;i*i<=n;i++) 
       if(n%i==0) 
         return false;
       else
         return true;
}
int main (void) 
{   cout<<"500以内孪生素数有：";
	for(int i=2;i<=500;i++) 
	  {
	  	 if(su(i) ==1&&su(i+2) ==1) 
           cout<<endl<<i<<"和"<<i+2<<endl;
	  }
	  return 0;
}