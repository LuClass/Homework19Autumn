#include <iostream>
using namespace std;
int main(void){
	int x,i,sum=0;
	cin>>x;
	cout<<"1 ";
	for(i=2;i<=x/2;i++){
		if(x%i==0){
			cout<<i<<" ";
			sum+=i;
		}
	}
	cout<<x<<endl;
	sum+=1;
	if(sum==x)
	cout<<x<<"是一个完全数";
return 0;
}
 
