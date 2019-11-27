#include <iostream>
#include <bitset>
using namespace std;
int main ()
{
	int a;
	cin>>a;
	cout<<bitset<sizeof(a)*8>(a)<<endl;
	return 0;
} 
