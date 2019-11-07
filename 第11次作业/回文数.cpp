#include<iostream>
using namespace std;
int  main(){
	int x;
	cin>>x;
	bool huiwenshu(int x);
	if(huiwenshu(x)==1){
		cout<<"Yes"; 
	}
	else
		cout<<"No";
}
bool huiwenshu(int x){
	int a[500];
	int i=0,j;
	while(x!=0){
		a[i+1]=x%10;
		x/=10;
		i++;
	}
	for(j=1;j<=i;j++){
		if(a[j]!=a[i-j+1])
			return false;
	}
	return true; 
}
