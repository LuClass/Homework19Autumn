#include<iostream>
using namespace std;
#include<math.h>

struct Result
{
    double x1;
	double x2;	
};

  Result f(int a,int b,int c)
  {
    Result JIE;
    
	double derta=b*b-4*a*c;
	
	if(derta==0)
	   {
	     JIE.x1=-b/(2*a);
	     JIE.x2=-b/(2*a);
	   }
	else if(derta>0)
	   {
	     JIE.x1=(-b+sqrt(derta))/(2*a);
	     JIE.x2=(-b-sqrt(derta))/(2*a);
	   }
	return JIE;
  }

int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;
	Result JIE;
	  if(b*b-4*a*c<0)
	    {
	      cout<<"нч╫Б"<<endl;
	      return 0;
		}
      else 
	    {
	      Result JIE=f(a,b,c);
          cout<<"x1="<<JIE.x1<<endl;
          cout<<"x2="<<JIE.x2<<endl;
          return 0;
		}
}

 
