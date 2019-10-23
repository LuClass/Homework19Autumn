#include <iostream>
using namespace std;
int main()
{
  long int i;
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin>>i; 
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.75;
  bonus4=bonus2+200000*0.5;
  bonus6=bonus4+200000*0.3;
  bonus10=bonus6+400000*0.15;
  switch(i/100000){
  	case 0:
  	    bonus=i*0.1;
    case 1:
        bonus=bonus1+(i-100000)*0.075;
    case 2:
        bonus=bonus2+(i-200000)*0.05;
    case 3:
        bonus=bonus4+(i-400000)*0.03;
    case 4:
        bonus=bonus6+(i-600000)*0.015;
    default:
        bonus=bonus10+(i-1000000)*0.01;
  }
  
   
  cout<<"bonus="<<bonus;
  return 0;
}
