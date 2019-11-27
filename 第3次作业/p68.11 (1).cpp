#include <iostream>
using namespace std;
int main(){
   int a,b=1,c=0,d=1,e=0;
   cout<<"输入一个十进制数:a="<<endl;
   cin>>a;
   if(a<2)  
   e=a;
   else 
   while(b!=0){
   	c=a%2;
    b=a/2;
   	a=b;
   	e=e+c*d;
   	d=d*10;
   } 
   cout<<e<<endl;
   return 0;
}
