/*
题目：输出9*9口诀。
1.程序分析：分行与列考虑，共9行9列，i控制行，j控制列。

*/

#include <iostream>
#include<iomanip>
#include "conio.h"
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
      //cout<<setiosflags(ios::left)    //设置左对齐输出，空格在后
      cout<<i<<"*"<<j<<"="<<setw(2)<<result<<" ";
    }
    cout<<endl; /*每一行后换行*/
  }
  getch();
}

