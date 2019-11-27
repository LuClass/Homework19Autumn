<<<<<<< HEAD:ç¬¬5æ¬¡ä½œä¸š/4.cpp
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
  int day,month,year,sum,leap;
  cout<<"please input year,month,day"<<endl;
  cin>>year>>month>>day;
  switch(month) /*å…ˆè®¡ç®—æŸæœˆä»¥å‰æœˆä»½çš„æ€»å¤©æ•°*/
  {
    case 1:sum=0;break;
    case 2:sum=31;break;
    case 3:sum=59;break;
    case 4:sum=90;break;
    case 5:sum=120;break;
    case 6:sum=151;break;
    case 7:sum=181;break;
    case 8:sum=212;break;
    case 9:sum=243;break;
    case 10:sum=273;break;
    case 11:sum=304;break;
    case 12:sum=334;break;
    default:cout<<"data error"<<endl;
  }
  sum=sum+day; /*å†åŠ ä¸ŠæŸå¤©çš„å¤©æ•°*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*åˆ¤æ–­æ˜¯ä¸æ˜¯é—°å¹´*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*å¦‚æœæ˜¯é—°å¹´ä¸”æœˆä»½å¤§äº2,æ€»å¤©æ•°åº”è¯¥åŠ ä¸€å¤©*/
    sum++;
  cout<<"It is the day."<<sum;
  return 0;
}
=======
using namespace std;
#include <iostream>
main()
{
  int day,month,year,sum,leap;
  cout<<"\nplease input year month day\n";
  cin>>year>>month>>day;
  switch(month) /*ÏÈ¼ÆËãÄ³ÔÂÒÔÇ°ÔÂ·İµÄ×ÜÌìÊı*/
  {
    case 1:sum=0;break;
    case 2:sum=31;break;
    case 3:sum=59;break;
    case 4:sum=90;break;
    case 5:sum=120;break;
    case 6:sum=151;break;
    case 7:sum=181;break;
    case 8:sum=212;break;
    case 9:sum=243;break;
    case 10:sum=273;break;
    case 11:sum=304;break;
    case 12:sum=334;break;
    default:cout<<"data error";break;
  }
  sum=sum+day; /*ÔÙ¼ÓÉÏÄ³ÌìµÄÌìÊı*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*ÅĞ¶ÏÊÇ²»ÊÇÈòÄê*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*Èç¹ûÊÇÈòÄêÇÒÔÂ·İ´óÓÚ2,×ÜÌìÊıÓ¦¸Ã¼ÓÒ»Ìì*/
    sum++;
  cout<<"It is the "<<sum<<"th day.";
  cin.get();
}
>>>>>>> master:ç¬¬5æ¬¡ä½œä¸š/æˆ´å€¼æ´‹4.cpp
