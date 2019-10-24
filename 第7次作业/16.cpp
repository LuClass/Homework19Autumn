#include <iostream>
using namespace std;
int main()
{
  int a,b,num1,num2,temp;
  cout<<"please input two numbers:\n";
  cin>>num1>>num2;
  if(num1<num2)/*交换两个数，使大数放在num1上*/
  {
    temp=num1;
    num1=num2;
    num2=temp;
  }
  a=num1;b=num2;
  while(b!=0)/*利用辗除法，直到b为0为止*/
  {
    temp=a%b;
    a=b;
    b=temp;
  }
  cout<<"gongyueshu:\n"<<a<<endl;
  cout<<"gongbeishu:\n"<<num1*num2/a<<endl;
  return 0;
}
