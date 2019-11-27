#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int a,int b);
void toHex(int x);
int main()
{
	int a,b;
	cin>>a>>b;
	toHex(max(a,b));
	return 0;
}
