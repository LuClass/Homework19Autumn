#include <iostream>
using namespace std;

int main()
{

  int i,j,n,s;
  cin>>i>>j;
  if(i>j){
		int t = i;
		i = j;
		j = t;
	}
  for(int z=i;z<=j;z++)
  {
    n=z;
    int sum=0;
    for(i=1;i<z;i++)
    {
      if((z%i)==0)
      {
        sum += i;
      }
    }
    if(z==sum)
    {
      cout<<z<<" ";
    }
  }
  return 0;
}

