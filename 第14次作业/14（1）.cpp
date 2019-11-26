#include<iostream>
#include<math.h>
using namespace std;
int f(int a,int b,int c){
	double delta=b*b-4*a*c;
    return delta;
}
int main(){
cout<<"请输入参数值:"; 
int a,b,c;
cin>>a>>b>>c;
double x1,x2;
   double delta=f(a,b,c);
   if(delta<0) 
    cout<<"无解";
   if(delta==0)
    {
	 x1=(-b)/(2*a);
     cout<<"有一解"<<x1;
	} 
   if(delta>0) 
   {
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    cout<<"有两解"<<x1<<x2; 
   }
   return 0;
}
