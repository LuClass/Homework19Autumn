#include<iostream.h>
void main()
{    int year,month,day,sum=0;
     int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
     cin>>year>>month>>day;
	 if((year%400==0||(year%4==0&&year%100!=0))&&month>2) 
		 sum++;
	 for(int i=0;i<month;i++)
		 sum+=a[i];
	 sum+=day;
	 cout<<sum;

}