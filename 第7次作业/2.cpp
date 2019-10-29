using namespace std;
#include <iostream>
int main()
{
	long int i;
	int b1,b2,b4,b6,b10;
	cout<<"ÊäÈëÀûÈó"<<endl; 
	cin>>i;
	cout<<"ÀûÈó="; 
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b4=b2+200000*0.05;
	b6=b4+200000*0.03;
	b10=b6+400000*0.015;
	switch(int(i/100000))
	{
		case 0:cout<<i*0.1;
		       break;
		case 1:cout<<b1+(i-100000)*0.75;
		       break;
		case 2:
		case 3:cout<<b2+(i-200000)*0.05;
		       break;
		case 4:
		case 5:cout<<b4+(i-400000)*0.03;
		       break;
		case 6:
		case 7:
		case 8:
		case 9:cout<<b6+(i-600000)*0.015;
		       break;
		default:cout<<b10+(i-1000000)*0.01;
	}
	return 0;
}
