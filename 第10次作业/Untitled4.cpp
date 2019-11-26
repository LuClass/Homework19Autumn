#include<iostream>
using namespace std;
int sum(int m)
{
    int n,sum=0; 
    while(1)
	{		
	    while(m!= 0)
		{		
		n = m % 10;	
        sum+=n;
		m /= 10; 
		}
	    cout<<sum<<'\n';
	}
    return 0;
}
bool isSmith(int n)
{
  int k=0,m;
  m=n;
  for(int i=2;i<=m;i++)
  {
  while(n%i==0&&n!=i)
  {
  n/=i;
  k+=i;
  }
  }
  if(k==sum(n))
  return true;
  else
  return false;
}
  
  int main(){
  int n;
  cout<<"Input a number ";
  cin>>n;
  cout<<boolalpha<<isSmith(n);
  return 0;
  }
  
