#include<iostream>
using namespace std;

int main(){
	int i,j,k,n;
  cout<<"'water flower'number is:";
  for(n=100;n<1000;n++)
  {
    i=n/100;
    j=n/10%10;
    k=n%10;
    if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
      cout<<n<<"	";
  }
	return 0;
} 
