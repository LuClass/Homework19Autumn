using namespace std;
#include <iostream>
int divisor(int a,int b)
{
  int temp,c,d;
  if(a<b)
  {
    temp=a;
    a=b;
    b=temp;
  }
  c=a;d=b;
  while(d!=0)/*利用辗除法，直到b为0为止*/
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  return c;
}
int main()
{
	int a,b,c;
	cout<<"please input two numbers:"<<endl;
	cin>>a>>b;
	c=divisor(a,b);
	cout<<"公约数="<<c<<endl;
	cout<<"公倍数="<<a*b/c;
	return 0; 
}
