using namespace std;
#include <iostream>
int main()
{
  long int i;
  int flag;
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin>>i;
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.75;
  bonus4=bonus2+200000*0.5;
  bonus6=bonus4+200000*0.3;
  bonus10=bonus6+400000*0.15;
  if(i<=100000)
  flag=1;
  else if(i<=200000)
  flag=2;  
  else if(i<=400000)
  flag=3;      
  else if(i<=600000)
  flag=4;         
  else if(i<=1000000)
  flag=5;              
  switch(flag)
  {
    case 1:bonus=i*0.1;break;
    case 2:bonus=bonus1+(i-100000)*0.075;break;
    case 3:bonus=bonus2+(i-200000)*0.05;break;
    case 4:bonus=bonus4+(i-400000)*0.03;break;
    case 5:bonus=bonus6+(i-600000)*0.015;break;
    default:bonus=bonus10+(i-1000000)*0.01;break;
  }
  cout<<"bonus="<<bonus;
  return 0;
}
