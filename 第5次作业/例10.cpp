#include <iostream>
using namespace std;
int main()
{
  int i,j;
  char c='n';
  cout<<"\1\1"<<endl;/*Êä³öÁ½¸öÐ¦Á³*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<c<<c;
    cout<<endl;
  }
  return 0; 
}
