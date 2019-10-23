#include<iostream>
using namespace std;

int Zuhe(int a,int b){
	int i,cap=1,bot=1;
	for(i=a-b+1;i<=a;i++)
		cap*=i;
	for(i=1;i<=b;i++)
		bot*=i;
	return cap/bot;
}

int main(){
	int n,k;
	cout<<Zuhe(4,2)<<endl<<Zuhe(6,4)<<endl<<Zuhe(8,7);
	return 0;
}
