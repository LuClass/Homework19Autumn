#include <iostream>
using namespace std;
int main(void){
	int year,month,day,sum;
	cout<<"请输入年 月 日：";
	cin>>year>>month>>day;
    switch(month){
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
		default:cout<<"输入数据错误"<<endl;	   	          
	}
	sum=sum+day;
	if(month>12)
	    return 0;
	else if(year%4==0&&year%100!=0)
	        if(month>2)
	        sum++;
	    cout<<"这是这一年的第"<<sum<<"天" ;
	return 0; 
}

