#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int x,y,t;
	cout<<"请输入两个整数：";
	cin>>x>>y;
	t=max(x,y);
	toHex(t);
	return 0;
}
