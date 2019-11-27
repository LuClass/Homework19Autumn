#include<iostream>
using namespace std;


int div(int a,int b)
{
int temp,c,d;
  if(a<b)
  {
    temp=a;
    a=b;
    b=temp;
  }
  c=a;d=b;
  while(d!=0)
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  return c;
}

int mult(int a,int b)
{

	return a*b/div(a,b);
}

int main()
{   
    int num1,num2;
	cout<<"请输入两个整数"<<endl;
	cin>>num1>>num2;
	cout<<div(num1,num2)<<endl;
	cout<<mult(num1,num2)<<endl;
}
