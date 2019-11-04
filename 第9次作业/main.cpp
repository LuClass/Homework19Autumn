using namespace std;
#include <iostream>
#include "max.cpp"
#include "hex.cpp"
int max(int ,int );
void toHex(int );
int main()
{
	int x,y;
	cin>>x>>y;
	toHex(max(x,y));
}

