#include<iostream>
using namespace std;
using namespace std;
int max(int x,int y);
char toHex(int x);
int main (){
	int a,b;
	cin>>a>>b;
	cout<<max(a,b);
	cout<<toHex(max(a,b));
}
