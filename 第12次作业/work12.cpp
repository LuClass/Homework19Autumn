1.
#include<iostream>
using namespace std;
int main()
{
	int i,j,x,y,z;
	cin>>i>>j;
	if(i<100||j>1000||i>=j) return false;
	else 
	{
		for(int m=i;m<=j;m++)
		{
			x=m/100;
			y=m/10%10;
			z=m%10;
			if(x*100+y*10+z==x*x*x+y*y*y+z*z*z)
			cout<<m<<" ";
        }
	}
	return 0;
}

2.
#include<iostream>
using namespace std;
int main(){
	int x,y;
	int sum=0;
	cin>>x;
	if(x<0) return false;
	else
	{
		y=x;
		while(y)
		{
			sum=sum*10+y%10;
			y=y/10;
		}
		if(sum==x) cout<<"Yes.";
		else cout<<"No.";
	}
	return 0;
}

3.
#include<iostream>
using namespace std;
int main(){
	int i,j;
	int sum=0;
	cin>>i>>j;
	if(i>=j||i<0||j<0) return false;
	else
	{
		for(int x=i;x<=j;x++)
		{
			for(int y=1;y<x;y++)
			{
				if(x%y==0) sum=sum+y;
			}
			if(sum==x)
			cout<<x<<" ";
			sum=0;  
	    }
	}
	return 0;
}
