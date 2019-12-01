using namespace std;
#include <iostream>
int main(void)
{
	int year,month,day,sum,leap;
	cout<<"Please input year,month,day.\n";
    cout<<"year ";
    cin>>year;
    cout<<"month ";
    cin>>month;
    cout<<"day ";
    cin>>day;
    switch(month)//计算某月以前月份的总天数
	{
		case 1:sum=0;
		       break;
		case 2:sum=31;
		       break;
	    case 3:sum=59;
		       break;
		case 4:sum=90;
		       break;
		case 5:sum=120;
		       break;
		case 6:sum=151;
		       break;
		case 7:sum=181;
		       break;
		case 8:sum=212;
		       break;
		case 9:sum=243;
		       break;
		case 10:sum=273;
		       break;
		case 11:sum=304;
		       break;
		case 12:sum=334;
		       break;
	    default:cout<<"date error"<<endl; 
	} 
	sum=sum+day;//加上某天的天数
	if(year%4==0)//判断是否是闰年 
	  leap=1;
	else
	  leap=0;
	if(leap=1&&month>2)
	  sum++;
	cout<<"这是今年第"<<sum<<"天"<<endl;
	return 0;
	
}
