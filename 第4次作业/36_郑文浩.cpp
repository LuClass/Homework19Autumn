//第四次作业 918107820336 36_郑文浩
#include <iostream>
#include<cmath>
using namespace std;
bool Isprime(int n); 
int main(){
	int count1=0;          //P68 T11（4） 
  char x = 0; 
  do{
    x = cin.get();		
    if(x >= '0' && x <='9' )
	 count1++;
  }while(x != '\n');		
  cout<<"数字字符个数为:"<<count1<<endl;
  int count2=2;         //T11 (7)
  double a=3,b=2,c=0;
  cout << '1' << '/' <<'2'<<' '<<'3'<<'/'<<'2'<<' ' ;
  for(int i=1;count2<=20;i++){
  	double c=a;
  	a+=b;
  	b=c;
  	count2+=1;
  	cout << a << '/'<<b<<' ';}
  	cout << endl;


	int y;                //T11 (7)
	cin >> y;
	for(int i=1;i<=sqrt(y);i++){
		if((i<sqrt(y))&&(y%i==0))
		cout << i << ' ' << (y/i)<< ' ';
		if(i==sqrt(y))
		cout << i << ' ';
	}
	cout << endl;
	for(int i=1;i<=100;i++){
  	if(Isprime(i))
  	cout << i << ' ';
  }  
}
bool Isprime(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
		if((i<sqrt(n))&&(n%i==0)){
			sum=sum+i+n/i;
		}
		if(i==sqrt(n))
		sum+=i;
	}
	if(sum==(2*n)){
		return true;
	}
	else
	return false;
}

