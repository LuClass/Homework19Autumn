11.4
#include<iostream>
using namespace std;
int main(void){
  int count=0;
  char ch = 0; 
  do{
    ch = 
	cin.get();	
    if(ch >= '0' && ch <='9')
	 count++;
  }while(ch != '\n');		
  cout<<"count="<<count<<endl;
  return 0;
}

11.7
#include<iostream>
using namespace std;
int main(void){
 int a=1,b=2,x,n=1;
 if(n<=2)
 {
 cout<<a<<"/"<<b<<endl;
 a=a+b;
 b=2;
 n++;}
 cout<<"3/2"<<endl;
 
  while(n<21){
 	x=a;
 	a=a+b;
 	b=x;
 	n++;
 	cout<<a<<"/"<<b<<endl;
 }
 return 0;
}

11.8
#include<iostream>
using namespace std;
int main(void){
 int x,y=0;
 cout<<"请输入一个正整数";
 cin>>x;
 cout<<"他的因子是"; 
 for(int a=1;a<=x;a++)
 {if(x%a==0)
  cout<<a<<" ";
 }
 cout<<"完全数有"; 
 for(int n=2;n<=100;n++){
  for(int b=1;b<n;b++) {
    if(n%b==0)
      y+=b;}
  if(y==n)
      cout<<n<<" ";
      y=0;
	          }
 return 0;
}