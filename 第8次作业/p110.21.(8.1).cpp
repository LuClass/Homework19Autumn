#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	cout<<x%10;
	while(x!=0){
		x=x/10;
		if(x==0)
			break;
		cout<<x%10;
	}
return 0;
}
