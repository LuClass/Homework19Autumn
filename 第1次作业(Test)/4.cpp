using namespace std;
#include <iostream>
int main()
{
	int n,y,r,d;
	cin>>n>>y>>r;
	if(n%400==0||n%4==0&&n%100!=0)
    {
    	switch(y/1)
		{
    	 case 1:d=r;
    	        cout<<"天数为:"<<d<<endl;
         break;
         case 2:d=31+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 3:d=31+29+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 4:d=31+29+31+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 5:d=31+29+31+30+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 6:d=31+29+31+30+31+r;
		 cout<<"天数为:"<<d<<endl;
         break;
         case 7:d=31+29+31+30+31+30+r;
		 cout<<"天数为:"<<d<<endl;     
    	 break;
    	 case 8:d=31+29+31+30+31+30+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 9:d=31+29+31+30+31+30+31+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 10:d=31+29+31+30+31+30+31+31+30+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 11:d=31+29+31+30+31+30+31+31+30+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 12:d=31+29+31+30+31+30+31+31+30+31+30+r;
    	 cout<<"天数为:"<<d<<endl;
		}
	}
	else {
		switch(y/1)
		{
    	 case 1:d=r;
    	 cout<<"天数为:"<<d<<endl;
         break;
         case 2:d=31+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 3:d=31+28+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 4:d=31+28+31+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 5:d=31+28+31+30+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 6:d=31+28+31+30+31+r;
         cout<<"天数为:"<<d<<endl;
         break;
         case 7:d=31+28+31+30+31+30+r;   
		 cout<<"天数为:"<<d<<endl;  
    	 break;
    	 case 8:d=31+28+31+30+31+30+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 9:d=31+28+31+30+31+30+31+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 10:d=31+28+31+30+31+30+31+31+30+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 11:d=31+28+31+30+31+30+31+31+30+31+r;
    	 cout<<"天数为:"<<d<<endl;
    	 break;
    	 case 12:d=31+28+31+30+31+30+31+31+30+31+30+r;
    	 cout<<"天数为:"<<d<<endl;
		 }
	}
	return 0;
}
