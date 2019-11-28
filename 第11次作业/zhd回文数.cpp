#include <iostream>
using namespace std;
static int n=0;
static int ch[100];
void function(int x){
	if(x<10){
		ch[n++]=x;
		return;
	}
	else
		function(x/10);
		ch[n++]=x%10;
}

int main(){
	int x;
	cin>>x;
	function(x);
	int a=0;
	while(a<n/2){
		if(ch[a]!=ch[n-1]){
			cout<<x<<" is not huiwenshu."<<endl;
			return 0;
		}
		a++;
		n--;
	}
	cout<<x<<" is huiwenshu."<<endl;
	return 0;
} 

