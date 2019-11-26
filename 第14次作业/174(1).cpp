#include <iostream>
#include <math.h>
using namespace std;

struct Solution
{
  int count;    
  double x, x1, x2;
};

Solution f(int a, int b, int c)
{
	Solution sol;
	sol.x=(-b/2*a);
	sol.x1=((-b+sqrt(b*b-4*a*c))/(2*a));
	sol.x2=((-b-sqrt(b*b-4*a*c))/(2*a));
	return sol;
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	Solution sol;
	sol=f(a,b,c);
	int delta=(b*b-4*a*c);
	if(delta<0)
	    {
	    	sol.count=0;
	    	cout<<"ÎÞÊµ¸ù"<<endl; 
		}
	else if(delta==0)
	   	{
	   		sol.count=1;
	   	    cout<<sol.count<<endl;
	   	    cout<<sol.x<<endl;
		}
	else	
		{
			sol.count=2;
		    cout<<sol.count<<endl;
		    cout<<sol.x1<<" "<<sol.x2<<endl;
		}
	return 0;
}
