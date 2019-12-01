#include <iostream>
using namespace std;
int main (){
	int x,i=2,a=0;
	cin>>x;
	cout<<x<<"=";
    while (a==0){
    	if(x%i==0){
    		cout<<i;
    		x=x/i;
    		a=1;}
    	else i++;
	}
    	
    while (i<=x){
    	if(x%i==0){
    		cout<<"*"<<i;
    		x=x/i;}
    	else i++;
    }
	return 0;
}	#include <iostream>
using namespace std;
int main (){
	int x,i=2,a=0;
	cin>>x;
	cout<<x<<"=";
    while (a==0){
    	if(x%i==0){
    		cout<<i;
    		x=x/i;
    		a=1;}
    	else i++;
	}
    	
    while (i<=x){
    	if(x%i==0){
    		cout<<"*"<<i;
    		x=x/i;}
    	else i++;
    }
	return 0;
}	
