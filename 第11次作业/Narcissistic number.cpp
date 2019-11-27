#include<iostream>
using namespace std;
#define f(a) (a)*(a)*(a)
int main(){
	int start,end;
	cin>>start>>end;
	for(int i=start;i<=end;++i){
		if(f(i%10)+f(i/10%10)+f(i/100%10)==i)	cout<<endl<<i;
	}
	return 0;
}
