#include<iostream> 
using namespace std;
int main(){
		long int i;            //程序2 
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  cin >> i;
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.75;
  bonus4=bonus2+200000*0.5;
  bonus6=bonus4+200000*0.3;
  bonus10=bonus6+400000*0.15;
  if(i<=100000)
    bonus=i*0.1;
    else if(i<=200000)
      bonus=bonus1+(i-100000)*0.075;
        else if(i<=400000)
          bonus=bonus2+(i-200000)*0.05;
            else if(i<=600000)
              bonus=bonus4+(i-400000)*0.03;
                else if(i<=1000000)
                  bonus=bonus6+(i-600000)*0.015;
                    else
                      bonus=bonus10+(i-1000000)*0.01;
  cout << bonus << endl;
  
  int day,month,year,sum,leap;           //程序4 
	cin >> year >>month >>day ;
	cout <<year << month << day<< "     ";
  switch(month) /*先计算某月以前月份的总天数*/
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
    default:cout << "data error";break;
  }
  sum=sum+day; /*再加上某天的天数*/
  if(year%400==0||(year%4==0&&year%100!=0)) /*判断是不是闰年*/
    leap=1;
  else
    leap=0;
  if(leap==1&&month>2) /*如果是闰年且月份大于2,总天数应该加一天*/
    sum++;
  cout << "It is the " << sum << "th day "<< endl;
  
  cout <<"Hello C-world!\n";           //程序6 
  cout << " ****\n";
  cout <<" *\n";
  cout <<" * \n";
  cout << " ****\n";
  
  for (int i=1;i<=9;i++){               //程序8 
  	for(int j =1;j<=i;j++){
  		cout << j << 'x'<< i << '='<< j*i<< ' ' ; 
	  }
	  cout << endl;}
	  
	  int l,j;                     //程序10 
  cout <<"\1\1\n"; /*输出两个笑脸*/
  for(l=1;l<11;l++)
  {
    for(j=1;j<=l;j++){
	
      char c=100;
      cout << c << c;}
      cout <<"\n";
}

  }

 
