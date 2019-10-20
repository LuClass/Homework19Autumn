using namespace std;
#include <iostream>
main()
{
  int i,j;
  cout<<"\1\1"<<endl; /*Êä³öÁ½¸öÐ¦Á³*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<"\219\219";
    cout<<endl;
  }
  cin.get();
}
