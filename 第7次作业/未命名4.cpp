#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e,i,j;
	cout<<"依次输入宽和高"<<endl;
	cin>>a>>b;
	for(i=1;i<=b;i++)	
	{
	 for(e=1;e<i;e++)
	 cout<<" "<<"";
	 for(c=1;c<=a;){
	 cout<<"*"<<"";
	 c++;
	 }
	 cout<<endl;
}cout<<"\n"; 
	for(i=1;i<=b;i++)	
	{for(e=1;e<=b-i;e++)
	 cout<<" "<<"";
	 for(c=1;c<=a;){
	 cout<<"*"<<"";
	 c++;}
	 cout<<endl;
}	 
   
}

