//郑文浩的第七次作业 36_郑文浩 
#include<iostream>
using namespace std;
int main()
{
  long int i;                  //T2
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin >> i;
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
  case 3:
    bonus=bonus2+(i-200000)*0.05;
  case 5:
    bonus=bonus4+(i-400000)*0.03;
  case 9:
    bonus=bonus6+(i-600000)*0.015;
  default :
    bonus=bonus10+(i-1000000)*0.01;}
  cout << bonus << endl;
  for(int i=100;i<=999;i++){             //T13
		int a=i/100;
		int b=(i%100)/10;
		int c=((i%100)%10);
		if(a*a*a+b*b*b+c*c*c==i)
		cout  << i <<' ';}
  int c,d,num1,num2,temp;                  //T16
  cout << endl;
  cout << "please input two numbers:\n";
  cin >> num1 >> num2;
  if(num1<num2)/*交换两个数，使大数放在num1上*/
  {
    temp=num1;
    num1=num2;
    num2=temp;
  }
  c=num1;d=num2;
  while(d!=0)/*利用辗除法，直到b为0为止*/
  {
    temp=c%d;
    c=d;
    d=temp;
  }
  cout << "最大公约数：" << c << endl;
  cout << "最小公倍数:" << num1*num2/c<< endl;
  for(int i=1;i<=4;i++){                //T23
		for(int j=1;j<=i-1;j++){
			cout << ' ';
		}
	cout << "*****" ;
	for(int j=1;j<=2*(4-i);j++)
	cout << ' ';
	cout <<"*****" <<  endl;
	} 
	
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4-i;j++){
			cout << ' ';
		}
	cout << "*****" ;
	for(int j=1;j<=2*(i-1);j++){
		cout << ' ';
	}
	cout << "*****"<<endl;
	}

}
