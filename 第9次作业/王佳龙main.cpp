#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
#include"max.h"
#include"hex.h" 
int main(){
	int a,b,c;
	cout<<"输入两个整数"<<endl;
	cin>>a>>b;
	c=max(a,b);
	toHex(c);
	return 0;
}

