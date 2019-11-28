<<<<<<< HEAD:ç¬¬5æ¬¡ä½œä¸š/8.cpp
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<" "<<j<<" "<<result; 
    }
    cout<<endl;
  }
  return 0;
}
=======
using namespace std;
#include <iostream>
main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
	  cout<<i<<"*"<<j<<"=";
	  cout.setf(std::ios::left);//×ó¶ÔÆë 
	  cout.width(3);//ÈýÎ»Êä³ö 
	  cout<<result;
    }
    cout<<endl;; /*Ã¿Ò»ÐÐºó»»ÐÐ*/
  }
  cin.get();
}
>>>>>>> master:ç¬¬5æ¬¡ä½œä¸š/æˆ´å€¼æ´‹8.cpp
