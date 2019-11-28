#include<iostream>
using namespace std;
int main()
{
	int x;
	int a[31];
	cout<<"请输入一个整数： ";
	cin>>x;
	if(x==0){
		for(int i=0;i<32;i++)
		cout<<0;
	}
	else if(x>0){
		int j=0;
		while(x!=0){
			a[j++]=x%2;
			x=x/2;
		}
		for(int k=0;k<32-j;k++){
			cout<<0;
		}
		for(;(j-1)>=0;j--){
			cout<<a[j-1];
		}
	}
	   else{
	   	int j=0;
		while(x!=0){
			a[j++]=x%2;
			x=x/2;
		}
		cout<<1;
		for(int k=0;k<32-j-1;k++){
			cout<<0;
		}
		for(;(j-1)>=0;j--){
			cout<<a[j-1];
		}
	   }
	 cout<<endl;
	 return 0;	
}
