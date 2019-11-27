#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
  int i,j,n,s;
  for(j=a;j<b;j++)
  {
    n=-1;
    s=j;
    for(i=1;i<j;i++)
    {
      if((j%i)==0)
      {
        n++;
        s=s-i;
      }
    }
    if(s==0)
      cout<<j<<" is a wanshu";
  }
	return 0;
}

