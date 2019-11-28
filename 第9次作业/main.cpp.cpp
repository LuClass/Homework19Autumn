using namespace std;
#include <iostream>
#include "max.cpp"
#include "hex.cpp"
int max(int x,int y);
void tohex(int x);
int main()
{
	int x,y;
	cout<<"请输入两个整数"<<endl;
	cin>>x>>y;
	tohex(max(x,y));
	return 0;
}
