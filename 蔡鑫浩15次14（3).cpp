using namespace std;
#include <iostream>
struct Fraction{
	int x;
	int y;
};
Fraction f(int a,int b)
{
	Fraction data;
	int i;
		if(a==0)
	{
		   data.x=0;
		   data.y=1;
	}
	else if(a>0)
	{
		for(i=a;i>=2;i--)
       {

		  if(a%i==0&&b%i==0)
		  {
			 a=a/i;
			 b=b/i;
		  }
	   }
	   data.x=a;
	   data.y=b;
    }
    else
    {
    	a=-a;
    	for(i=a;i>=2;i--)
       {

		  if(a%i==0&&b%i==0)
		  {
			 a=a/i;
			 b=b/i;
		  }
	   }
	   data.x=a;
	   data.y=b;	
	}
	return data;
}
struct function{
	Fraction data;
	bool compare(int a,int b,int c,int d)
	{
		if((a*d)>(c*d)) return true;
		return false;
		}
	void print(int x,int y)
	{
		cout<<x<<" "<<y<<endl;
	}
	void plus(int a,int b,int c,int d)
	{
		int x,y;
		x=a*d+b*c;
		y=b*d;
		data=f(x,y);
		print(data.x,data.y);		
			}
	void minus(int a,int b,int c,int d)
	{
		int x,y;
		x=a*d-b*c;
		y=b*d;
		data=f(x,y);
		print(data.x,data.y);
				}
	void multiplication(int a,int b,int c,int d)	
	{
		int x,y;
		x=a*c;
		y=b*d;
		data=f(x,y);
		print(data.x,data.y);
			}
	void division(int a,int b,int c,int d)	
	{
		int x,y;
		x=a*d;
		y=b*c;
		data=f(x,y);
		print(data.x,data.y);
			}		
};
int main()
{
	cout<<"¨º?¨¨?¡¤????¡é¡¤?¡Á¨®¦Ì??¦Ì"<<endl;
	int a,b;
	cin>>a>>b;
	Fraction data;
	data=f(a,b);
	cout<<data.x<<"/"<<data.y;
	 return 0;
 } 
