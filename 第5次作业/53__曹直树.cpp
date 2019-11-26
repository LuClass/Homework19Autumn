using namespace std;
#include <iostream>
int main()
{ //第二题
  long int i;
  cin>>i;
  int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
  bonus1=100000*0.1;
  bonus2=bonus1+100000*0.075;
  bonus4=bonus2+200000*0.05;
  bonus6=bonus4+200000*0.03;
  bonus10=bonus6+400000*0.015;
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
  cout<<"bonus="<<bonus;
  return 0; 
}
using namespace std;
#include <iostream>
int main (){//第四题
	int year, month, day, sum;
	cin>>year; cin>>month; cin>>day;
	switch (month){
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
	default:cout<<"date error";break;
	}
	sum=sum+day;
	if ((year%400==0||(year%4==0&&year%100!=0))&&month>2) 
	sum++;
	cout<<"这是第"<<sum<<"天";
	return 0;
}
using namespace std;
#include <iostream>
int main () {//第六题
	cout<<"  ****"<<endl;
	cout<<' '<<'*'<<endl;
	cout<<'*'<<endl;
	cout<<'*'<<endl;
	cout<<' '<<'*'<<endl;
	cout<<"  ****"<<endl;
	     return 0;
}
	using namespace std;
#include <iostream>
#include<iomanip>
int main (){//第八题
	for (int i=1;i<=9;i++) {
		for (int j=1;j<=i;j++) 
		cout<<' '<<j<<'*'<<i<<'='<<setw(2)<<j*i;
		cout<<endl;
	}
		return 0;
	}
	using namespace std;
#include <iostream>
#include <conio.h>
int main (){
	//第十题
	cout<<"\1\1\n";
	for (int i=1;i<=7;i++){
		for (int j=1;j<=i;j++)
		cout<<"梯";
		cout<<endl;}
return 0;
}