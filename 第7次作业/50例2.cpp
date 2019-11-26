#include <iostream>
using namespace std;
int main(){
	int I,bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
	cout<<"ÇëÊäÈëÀûÈó£º";
	cin>>I;
	bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
	switch(int (I/100000)){
		case 0:bonus=I*0.1;
		               break;
		case 1:bonus=bonus1+(I-100000)*0.075;
		               break;
		case 2:;
		case 3:bonus=bonus2+(I-200000)*0.05;
		               break;
		case 4:;
		case 5:bonus=bonus4+(I-400000)*0.03;
		               break;
		case 6:;
		case 7:;
		case 8:;
		case 9:bonus=bonus6+(I-600000)*0.015;
		               break;
		default:bonus=bonus10+(I-1000000)*0.01;	   			   			   			                  
	}
    cout<<bonus<<endl;
return 0;
}
