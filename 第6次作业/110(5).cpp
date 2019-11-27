#include <iostream>
using namespace std;
int main(){
int x,i;
cout<<"请输入一个整数x=";
cin>>x;
cout<<x<<"=";
for(i=2;i<=x;i++)
    while(x!=i){
    	if(x%i==0){
    		cout<<i<<"*";
    		x=x/i;
		}
		else
		   break;
	}
cout<<x;
return 0;
}
