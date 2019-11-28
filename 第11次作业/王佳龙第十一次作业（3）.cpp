#include <iostream>
using namespace std;
int f(int n){
	int i=1,sum=0,m;
	for(;i<n;i++){
		if(n%i==0)
		sum+=i;
	}if(sum==n)
	return true;
	else
	return false;}
int h(int i,int j){
	for(;i<j;i++){
        if(f(i))
        cout<<i<<" ";   
}
}
int main(){
	int i,j;
	cout<<"依次输入i，j的值（i<j)"<<endl;
	cin>>i;
	cin>>j;
	if(i>j)
	cout<<"error"<<endl;
	else
	h(i,j);
}
