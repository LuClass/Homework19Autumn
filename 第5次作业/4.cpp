#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int year,month,day,n;
	cin>>year>>month>>day;
	switch(month)
	{
		case 1:n=0;break;
		case 2:n=31;break;
		case 3:n=59;break;
		case 4:n=90;break;
		case 5:n=120;break;
		case 6:n=151;break;
		case 7:n=181;break;
		case 8:n=212;break;
		case 9:n=243;break;
		case 10:n=273;break;
		case 11:n=304;break;
		case 12:n=334;break;      
	}
	if(year%4==0) cout<<n+day+1;
	else cout<<n+day;
	
	return 0;
}
