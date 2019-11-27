#include <iostream> 
#include <iomanip>
//#include "conio.h"
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
     // cout<<setw(3)<<i<<'*'<<j<<'='<<result;  //对不齐。。 
	  printf("%d*%d=%-3d",i,j,result); /*-3d表示左对齐，占3位*/
    }
    cout<<endl; /*每一行后换行*/
  }
  //getch();
  return 0;
}
