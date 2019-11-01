using namespace std;
#include <iostream>
long int max(int,int);
void toHex(int);
int main()
{
	int c,d;
	cin>>c>>d;
	toHex(max(c,d));
	return 0;
}
