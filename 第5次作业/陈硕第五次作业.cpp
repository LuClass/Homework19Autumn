#include <iostream>
using namespace std;
int main ()
{int i;
cout<<"i=";
cin>>i;
switch (int (i/10)){
	case0:cout<<0.1*i;
	break;
	case1:cout<<1+(i-10)*0.075;
	break;
	case2:
	case3:cout<<1+0.75+(i-20)*0.05;
	break;
	case4:
	case5:cout<<1+0.75+1+(i-40)*0.03;
	break;
	case6:
		case7:
			case8:
				case9:cout<<1+0.75+1+0.3+(i-60)*0.015;
	break;
	default:cout<<1+0.75+1+0.3+0.6+(i-100)*0.01;
	return 0; 
             }
}
#include <iostream>
using namespace std;
int main (){
	int mon,day,year,a=0;
	cout<<"year=";
	cin>>year;
	cout<<"mon=";
	cin>>mon;
	cout<<"day=";
	cin>>day;
	switch( mon){
		case 1:a=0;break;
		case 2:a=31;break;
		case 3:a=59;break;
		case 4:a=90;break;
		case 5:a=120;break;
		case 6:a=151;break;
		case 7:a=181;break;
		case 8:a=212;break;
		case 9:a=243;break;
		case 10:a=173;break;
		case 11:a=304;break;
		case 12:a=334;break;
	}
	if((year%400==0||(year%4==0)&&year%100!=0)&&mon>=3)
	
	cout<<"the "<<a+day+1<<" day";
	else
	cout<<"the "<<a+day<<" day";
	return 0;
}
#include <iostream>
using namespace std;
int main(){
cout<<"    ***     "<<endl;
cout<<"   *    "<<endl;
cout<<"  *        "<<endl;
cout<<"  *   "<<endl;
cout<<"   *   "<<endl;
cout<<"    ***  "<<endl;
return 0;
}
# include <iostream>
#include<iomanip>
using namespace std;
int main ()
{int i,j;
for(i=1;i<=9;i++)
{	for(j=1;j<=i;j++)
	cout<<i<<'*'<<j<<'='<<setw(2)<<i*j<<"  "; 
	cout<<endl;}
	return 0;
}
#include <iostream>
using namespace std;
int main (){
	int i,j;
	cout <<"\1\1\n";
	for(i=1;i<=20;i++)
	{for(j=1;j<=i;j++)
	 cout<<"EE";
	cout<<endl;}
	return 0;
}