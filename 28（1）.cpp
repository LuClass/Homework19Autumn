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
