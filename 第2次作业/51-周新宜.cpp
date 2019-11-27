//23.x> 2 && x％2 == 0
//24.x> 8 || x <-8
//25.（A）0（B）0.333333（C）0（D）7
//26.（A）4（B）27（C）8（D）162
//27.（A）1  （B）1（C）31（D）0
using namespace std;
#include <iostream>
int main(void)
{
  float C,F,K;//C为摄氏温度，F为华氏温度，K为绝对温度 
  cin>>C;//输入摄氏温度 
  F=9/5*C+32;//计算华氏温度 
  K=C+273.15;//计算绝对温度 
  cout<<"F="<<F<<endl;//输出华氏温度 
  cout<<"K="<<K<<endl;//输出绝对温度 
  return 0;
}
