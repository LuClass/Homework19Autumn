#include<iostream.h>
void main()
{
  int i;
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin>>i;
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.75;
  bonus4=bonus2+200000*0.5;
  bonus6=bonus4+200000*0.3;
  bonus10=bonus6+400000*0.15;
  switch(i/100000)
  {   case 0:
          bonus=i*0.1;
		  break;
      case 1:
		  bonus=bonus1+(i-100000)*0.075;
		  break;
	  case 2:
		  bonus=bonus2+(i-200000)*0.05;
		  break;
	  case 3:
		  bonus=bonus2+(i-200000)*0.05;
		  break;
	  case 4:
		  bonus=bonus4+(i-400000)*0.03;
		  break;
      case 5:
		  bonus=bonus4+(i-400000)*0.03;
		  break;
	  case 6:
		  bonus=bonus6+(i-600000)*0.015;
		  break;
	  case 7:
		  bonus=bonus6+(i-600000)*0.015;
		  break;
	  case 8:
		  bonus=bonus6+(i-600000)*0.015;
		  break;
	  case 9:
		  bonus=bonus6+(i-600000)*0.015;
		  break;
	  default:
		  bonus=bonus10+(i-1000000)*0.01;
  }
  cout<<bonus;
}

