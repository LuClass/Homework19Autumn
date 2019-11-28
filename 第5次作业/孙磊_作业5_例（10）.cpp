#include <iostream>
//#include "conio.h"
using namespace std;
main()
{
  int i,j;
  cout<<"\01 \01\n"; /*Êä³öÁ½¸öÐ¦Á³*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<"\219";
    cout<<endl;
  }
  //getch();
  return 0; 
}

