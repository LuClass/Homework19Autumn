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
  while(d!=0)
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  return c;
}
void multiple(int a,int b)
{
	cout<<"最小公倍数："<<a*b/divisor(a,b);
} 
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"最小公约数为："<<divisor(a,b)<<endl;
	multiple(a,b);
	return 0; 
}
