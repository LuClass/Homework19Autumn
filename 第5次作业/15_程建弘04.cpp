/*
题目：输入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
　　　　　　情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include <iostream>
#include "conio.h"
using namespace std;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
  int day,month,year,sum,leap;
  cout<<"please input year,month,day"<<endl;
  cin>>year>>month>>day;
  for(int i=1;i<month;i++){
  	sum+=a[i-1];
  }
  sum=sum+day; /*再加上某天的天数*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*判断是不是闰年*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*如果是闰年且月份大于2,总天数应该加一天*/
    sum++;
  cout<<"It is the "<<sum<<" th day.";
  getch(); 
}
