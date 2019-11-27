#include <iostream>
using namespace std;
int main(){
	int a,b,c,sum;
	cout<<"几年" <<endl;
	cin>>a; 
	cout<<"几月" <<endl;
	cin>>b;
	cout<<"几日" <<endl;
	cin>>c;
	switch(b){case 1:sum=0;break;
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
	}
	if(a%4==0&&a%100!=0)
	sum=sum+1+c;
	else
	sum=sum+c;
	cout<<"第"<<sum<<"天"<<endl;
	return 0; 
} 
