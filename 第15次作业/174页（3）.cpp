using namespace std;
#include <iostream>
struct Fraction
{
	int a;
	int b;
};
float equality(float a,float b,float c,float d){
 	float m,n;
 	m=a/b,n=c/d;
 	if(m>n)
 	cout<<a<<"/"<<b<<">"<<c<<"/"<<d<<endl;
 	if(m<n)
 	cout<<a<<"/"<<b<<"<"<<c<<"/"<<d<<endl;
 }

  float addition(float a,float b,float c,float d){
 	float m,n,k;
 	m=a/b,n=c/d;
 	k=m+n;
 	cout<<"addition "<<k<<endl;
 }

  float subtraction(float a,float b,float c,float d){
 	float m,n,k;
 	m=a/b,n=c/d;
 	k=m-n;
 	cout<<"subtraction "<<k<<endl;
 }

  float multiplication(float a,float b,float c,float d){
 	float m,n,k;
 	m=a/b,n=c/d;
 	k=m*n;
 	cout<<"multiplication "<<k<<endl;
 }

  float division(float a,float b,float c,float d){
 	float m,n,k;
 	m=a/b,n=c/d;
 	k=m/n;
 	cout<<"division "<<k<<endl;
 }
int main ()
{
  Fraction p1,*q1=&p1;
  Fraction p2,*q2=&p2;
  int min;
  cin>>q1->a;
  cin>>q1->b;
  if(q1->a==0)
    cout<<"0/1";
  else
  {
  	if(q1->a<q1->b) 
      min=q1->a;
      else 
      min=q1->b;
      for(int i=min;i>1;i--)
      if(q1->a%i==0 && q1->b%i==0)
     {
        q1->a/=i;
        q1->b/=i;
      }
      cout<<q1->a<<"/"<<q1->b<<endl;
  }
  equality(q1->a,q1->b,q2->a,q2->b);
  addition(q1->a,q1->b,q2->a,q2->b);
  subtraction(q1->a,q1->b,q2->a,q2->b);
  multiplication(q1->a,q1->b,q2->a,q2->b);
  division(q1->a,q1->b,q2->a,q2->b);	
  return 0;
}
