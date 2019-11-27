#include<iostream>
using namespace std;

void nixu(int a){
   if(a > 0) {            
       cout<<a%10; 
       nixu(a/10);        
   }
}
int main(){
    int a;
    cin>>a;
    nixu(a);
	return 0;
}
