#include <iostream>
using namespace std;
int main(){
	int x,a=1,b=1,c=1,sum=0;
    cout<<"x="<<endl;
	cin>>x;
	while(a<x)
	{if(x%a==0){
		cout<<a<<endl;
		a++;}
		else
		a++;
}
    int i;
for(i = 1; i <= 100; ++i){
int sum = 0;
int j;
for(j = 1; j <= i/2; ++j){
if(j != i && i%j == 0){
sum += j;
}
}
if(sum == i)
cout<<sum<<endl;
}}


