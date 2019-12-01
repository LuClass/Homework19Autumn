using namespace std;
#include <iostream>
int f3(int x)// ¸÷Î»ÇóºÍ 
{
	int n=0;
	while(x>0)
	{
		n+=x%10;
		x/=10;
	}
	return n;
}
int f2(int x)//ÇóÒòÊýºÍ 
{
	int i,n=0;
	for(i=2;i<=x;i++)
    while(x!=i)
    {
      	if(x%i==0)
      	{
        	n+=f3(i);
        	x/=i;
    	}
      	else
        	break;
    }
    n+=f3(x);
    return n;
}
int f4(int x)
{
	int i,n=0;
	for(i=2;i<=x;i++)
		if(x%i==0)
		n+=i;	
    return n;
}
int f1(int num)
{
	while(f4(num)==0||f3(num)!=f2(num))
	num++;
	cout<<num;
	return 0;
}
int main()
{
	int num=0;
	cin>>num;
	f1(num);
  	return 0;
}
