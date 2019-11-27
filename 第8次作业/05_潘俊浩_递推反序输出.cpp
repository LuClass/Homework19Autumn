#include<iostream>
using namespace std;
int main()
{
	int a,b,n;
	cin >> n;
	while(n%10!=0){
		cout << n%10;
		n = n/10;
	}
    return 0;
 }

