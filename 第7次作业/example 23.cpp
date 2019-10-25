#include <iostream>
using namespace std;
int main()
{int i,j,k;
for(i=0;i<=4;i++)
{for(j=0;j<=i;j++)
  cout<<" ";
  for(k=0;k<=5;k++){
  cout<<"*";}
  cout<<"\n";
}
for(i=0;i<=4;i++)
{for(j=0;j<=4-i;j++)
cout<<" ";
for(k=0;k<=5;k++)
cout<<"*";
cout<<"\n";
}return 0;
}
