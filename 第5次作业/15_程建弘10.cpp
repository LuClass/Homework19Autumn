/*

题目：打印楼梯，同时在楼梯上方打印两个笑脸。 
1.程序分析：用i控制行，j来控制列，j根据i的变化来控制输出黑方格的个数。

*/

#include <iostream>
#include "conio.h"
using namespace std;
int main()
{
  int i,j;
  cout<<"\1\1"<<endl; /*输出两个笑脸*/
  for(i=1;i<11;i++)
  {
    for(j=1;j<=i;j++)
      cout<<"\219\219";
    cout<<endl;
  }
  getch(); 
}
