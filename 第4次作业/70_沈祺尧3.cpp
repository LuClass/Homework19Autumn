using namespace std;
#include <iostream>
#include <iomanip> 
int main(void){
	int x;
	cin>>x;
	for(int n=1;n<x;n++)
	{
		if(x%n==0)
		   cout<<n<<" ";
	}
	cout<<endl;
	
    int sum=0;
    for(int a=1;a<=100;a++)
    {
    	for(int b=1;b<a;b++)
    	{
    		if(a%b==0)
    		   sum=sum+b;
		} 
		if(sum==a)
		   cout<<a<<" ";
		   sum=0;
	}
}
