using namespace std;
#include <iostream>
#include <iomanip>
int main (void)
{
	int a=1,b=1,c=1,i=0,count=0;
	while(i<20)
	{ 
	  c=a+b;
	  i++;
	  cout<<"  "<<a<<setw(2)<<"\\"<<c;
	  count++;
	  b=a;
	  a=c;
	  if(count%5==0)
	    cout<<endl;
    }
	return 0;
	  
}
