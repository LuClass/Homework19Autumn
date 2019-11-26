using namespace std;
#include <iostream>
void factor(int n)
{
	cout<<n<<"=";
	int i;
  for(i=2;i<=n;i++)
    while(n!=i)
    {
      if(n%i==0)
      {
        cout<<i<<"*";
        n=n/i;
      }
      else
        break;
    }
  cout<<n;
	
}
int main()
{
  int n,i;
  cout<<"\nplease input a number:"<<endl;
  cin>>n;
  factor(n);
  return 0;
}
