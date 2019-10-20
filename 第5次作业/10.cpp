using namespace std;
#include <iostream>
main()
{
  int i,j;
  cout<<"\1\1\n"; /*Êä³öÁ½¸öÐ¦Á³*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<char(219)<<char(219);
    cout<<"\n";
  }
  return 0; 
}
