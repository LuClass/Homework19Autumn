using namespace std;
#include <iostream>
int gongyueshu(int num1,int num2)
{
	int a,b,temp;
	 if(num1<num2)
  {
    temp=num1;
    num1=num2;
    num2=temp;
  }
  a=num1;b=num2;
  while(b!=0)
  {
    temp=a%b;
    a=b;
    b=temp;
  }
  return a;
}
int gongbeishu(int num1,int num2)
{
	int a;
	a=num1*num2/gongyueshu(num1,num2);
	return a;
}
int main()
{
  int a,b,num1,num2,temp;
  cout<<"please input two numbers:\n";
  cin>>num1>>num2;
  cout<<"公约数:"<<gongyueshu(num1,num2)<<endl;
  cout<<"公倍数:"<<gongbeishu(num1,num2)<<endl;
  return 0;
}
